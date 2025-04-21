#include "PmergeMe.hpp"
#include <iostream>
#include <cstdlib>    // strtol, exit
#include <cerrno>
#include <climits>
#include <ctime>      // clock(), CLOCKS_PER_SEC
#include <iomanip>    // fixed, setprecision
#include <algorithm>  // sort, lower_bound
#include <utility>    // pair, make_pair, swap

// Comparator for std::sort by pair.second
static bool pairSecondLess(const std::pair<int,int>& a,
                           const std::pair<int,int>& b)
{
    return a.second < b.second;
}

// ——— Orthodox canonical form ———
PmergeMe::PmergeMe(int argc, char* argv[])
  : _timeVec(0.0), _timeDeq(0.0)
{
    parseArgs(argc, argv);
    _sortedVec = _vec;
    _sortedDeq = _deq;
}

PmergeMe::PmergeMe(PmergeMe const& o)
{
    _vec = o._vec;
    _deq = o._deq;
    _sortedVec = o._sortedVec;
    _sortedDeq = o._sortedDeq;
    _timeVec = o._timeVec;
    _timeDeq = o._timeDeq;
}

PmergeMe& PmergeMe::operator=(PmergeMe const& o) {
    if (this != &o) {
        _vec        = o._vec;
        _deq        = o._deq;
        _sortedVec  = o._sortedVec;
        _sortedDeq  = o._sortedDeq;
        _timeVec    = o._timeVec;
        _timeDeq    = o._timeDeq;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}

// ——— Public API ———
void PmergeMe::run() {
    printBefore();
    sortVector();
    sortDeque();
    printAfter();
    printTimes();
}

// ——— Argument parsing ———
void PmergeMe::parseArgs(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Error\n";
        std::exit(1);
    }
    for (int i = 1; i < argc; ++i) {
        char* end = 0;
        errno = 0;
        long  v = std::strtol(argv[i], &end, 10);
        if (errno || *end || v <= 0 || v > INT_MAX) {
            std::cerr << "Error\n";
            std::exit(1);
        }
        _vec.push_back(static_cast<int>(v));
        _deq.push_back(static_cast<int>(v));
    }
}

// ——— Printing ———
void PmergeMe::printBefore() const {
    std::cout << "Before: ";
    for (size_t i = 0; i < _vec.size(); ++i)
        std::cout << _vec[i] << (i+1 < _vec.size() ? " " : "");
    std::cout << "\n";
}

void PmergeMe::printAfter() const {
    std::cout << "After: ";
    for (size_t i = 0; i < _sortedVec.size(); ++i)
        std::cout << _sortedVec[i] << (i+1 < _sortedVec.size() ? " " : "");
    std::cout << "\n";
}

void PmergeMe::printTimes() const {
    std::cout << "Time to process a range of " << _vec.size()
              << " elements with std::vector : "
              << std::fixed << std::setprecision(5) << _timeVec << " us\n";
    std::cout << "Time to process a range of " << _deq.size()
              << " elements with std::deque : "
              << std::fixed << std::setprecision(5) << _timeDeq << " us\n";
}

// ——— Timing wrappers ———
void PmergeMe::sortVector() {
    clock_t s = std::clock();
    mergeInsertSortVector(_sortedVec);
    clock_t e = std::clock();
    _timeVec = double(e - s) / CLOCKS_PER_SEC * 1e6;
}

void PmergeMe::sortDeque() {
    clock_t s = std::clock();
    mergeInsertSortDeque(_sortedDeq);
    clock_t e = std::clock();
    _timeDeq = double(e - s) / CLOCKS_PER_SEC * 1e6;
}

// ——— Ford–Johnson + Jacobsthal + lower_bound for vector ———
void PmergeMe::mergeInsertSortVector(std::vector<int>& v) {
    int n = static_cast<int>(v.size());
    if (n <= 1) return;

    // 1) Pair up and sort each pair
    std::vector< std::pair<int,int> > pairs;
    pairs.reserve(n/2 + n%2);
    bool hasLast = false; int lastV = 0;
    for (int i = 0; i + 1 < n; i += 2) {
        int a = v[i], b = v[i+1];
        pairs.push_back(a < b
            ? std::make_pair(a,b)
            : std::make_pair(b,a));
    }
    if (n % 2) { hasLast = true; lastV = v[n-1]; }

    // 2) Sort pairs by .second
    std::sort(pairs.begin(), pairs.end(), pairSecondLess);

    // 3) Build “larger” chain + leftover
    std::vector<int> M;
    M.reserve(pairs.size() + (hasLast?1:0));
    for (size_t i = 0; i < pairs.size(); ++i)
        M.push_back(pairs[i].second);
    if (hasLast) M.push_back(lastV);

    // 4) Recursively sort M
    mergeInsertSortVector(M);

    // 5) Extract “smalls”
    int m = static_cast<int>(pairs.size());
    std::vector<int> smalls(m);
    for (int i = 0; i < m; ++i)
        smalls[i] = pairs[i].first;

    // 6) Get Jacobsthal insertion order
    std::vector<int> order = genJacobOrder(m);

    // 7) Insert each small via lower_bound
    for (size_t k = 0; k < order.size(); ++k) {
        int idx = order[k] - 1;
        int val = smalls[idx];
        std::vector<int>::iterator it =
            std::lower_bound(M.begin(), M.end(), val);
        M.insert(it, val);
    }

    v.swap(M);
}

// ——— Ford–Johnson + Jacobsthal + lower_bound for deque ———
void PmergeMe::mergeInsertSortDeque(std::deque<int>& d) {
    int n = static_cast<int>(d.size());
    if (n <= 1) return;

    std::deque< std::pair<int,int> > pairs;
    bool hasLast = false; int lastV = 0;
    for (int i = 0; i + 1 < n; i += 2) {
        int a = d[i], b = d[i+1];
        pairs.push_back(a < b
            ? std::make_pair(a,b)
            : std::make_pair(b,a));
    }
    if (n % 2) { hasLast = true; lastV = d[n-1]; }

    std::sort(pairs.begin(), pairs.end(), pairSecondLess);

    std::deque<int> M;
    for (size_t i = 0; i < pairs.size(); ++i)
        M.push_back(pairs[i].second);
    if (hasLast) M.push_back(lastV);

    mergeInsertSortDeque(M);

    int m = static_cast<int>(pairs.size());
    std::deque<int> smalls(m);
    for (int i = 0; i < m; ++i)
        smalls[i] = pairs[i].first;

    std::vector<int> order = genJacobOrder(m);
    for (size_t k = 0; k < order.size(); ++k) {
        int idx = order[k] - 1;
        int val = smalls[idx];
        std::deque<int>::iterator it =
            std::lower_bound(M.begin(), M.end(), val);
        M.insert(it, val);
    }

    d.swap(M);
}

// ——— Jacobsthal order generator ———
std::vector<int> PmergeMe::genJacobOrder(int m) {
    std::vector<int> order;
    if (m <= 0) return order;
    std::vector<char> used(m+1, 0);

    order.push_back(1);
    used[1] = 1;
    int Jnm2 = 0, Jnm1 = 1;
    while (true) {
        int Jn = Jnm1 + 2 * Jnm2;
        if (Jn > m) break;
        if (! used[Jn]) {
            order.push_back(Jn);
            used[Jn] = 1;
        }
        Jnm2 = Jnm1;
        Jnm1 = Jn;
    }
    for (int i = 1; i <= m; ++i)
        if (! used[i]) order.push_back(i);
    return order;
}