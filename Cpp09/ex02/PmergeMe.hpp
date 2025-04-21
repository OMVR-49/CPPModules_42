#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>

class PmergeMe {
public:
    // Orthodox canonical form
    PmergeMe(int argc, char* argv[]);
    PmergeMe(PmergeMe const& other);
    PmergeMe& operator=(PmergeMe const& other);
    ~PmergeMe();

    // Entrypoint
    void run();

private:
    std::vector<int> _vec, _sortedVec;
    std::deque<int>  _deq, _sortedDeq;
    double           _timeVec, _timeDeq;

    void parseArgs(int argc, char* argv[]);
    void printBefore() const;
    void printAfter() const;
    void printTimes() const;

    void sortVector();
    void sortDeque();

    // Ford–Johnson (merge‑insert) implementations
    static void mergeInsertSortVector(std::vector<int>& v);
    static void mergeInsertSortDeque(std::deque<int>& d);

    // Build optimal insertion order via Jacobsthal
    static std::vector<int> genJacobOrder(int m);
};

#endif