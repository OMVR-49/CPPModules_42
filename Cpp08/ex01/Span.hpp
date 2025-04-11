
#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <iostream>
#include <string>
#include <vector>
#include <set>

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
        class outOfRange : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

#endif
