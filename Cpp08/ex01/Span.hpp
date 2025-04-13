
#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <limits.h>
#include <iterator>
#include <stdexcept>
class Span
{
    private:
        unsigned int N;
        std::vector<int> vectorian;
    public:
    // OCCF:
        Span();
        Span& operator=(const Span& rhs);
        Span(const Span& other);
        ~Span();
        // Ex Requirement:
        Span(unsigned int MaxN);
        void addNumber(int number);
        unsigned int shortestSpan();
        unsigned int longestSpan();
        template <typename Iterator>
        void addRange(Iterator begin, Iterator end);
};

template <typename Iterator>
void Span::addRange(Iterator begin, Iterator end) {
    unsigned int distance = std::distance(begin, end);
    if (vectorian.size() + distance > N) {
        throw std::out_of_range("Cannot add range: would exceed maximum capacity");
    }
    vectorian.insert(vectorian.end(), begin, end);
}

#endif