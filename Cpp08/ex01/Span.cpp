#include "Span.hpp"
#include <climits>

// OCCF:
Span::Span() : N(0)
{
}

Span::Span(unsigned int N) : N(N)
{
}

Span& Span::operator=(const Span& rhs)
{
    if (this != &rhs)
    {
        this->N = rhs.N;
        this->vectorian = rhs.vectorian;
    }
    return (*this);
}

Span::Span(const Span& copy)
{
    *this = copy;
}

Span::~Span()
{
}

// Ex Requirement:

void Span::addNumber(int number)
{
    if (this->vectorian.size() >= this->N)
        throw std::out_of_range("Span is full");
    this->vectorian.push_back(number);
}

unsigned int Span::shortestSpan()
{
    if (this->vectorian.size() < 2)
        throw std::logic_error("Cannot find span: need at least 2 numbers");
    std::sort(this->vectorian.begin(), this->vectorian.end());
    unsigned int min = UINT_MAX;
    for (size_t i = 0; i < this->vectorian.size() - 1; i++)
    {
        unsigned int diff = this->vectorian[i + 1] - this->vectorian[i];
        if (diff < min)
            min = diff;
    }
    return (min);
}

unsigned int Span::longestSpan()
{
    if (this->vectorian.size() < 2)
        throw std::logic_error("Cannot find span: need at least 2 numbers");
    std::sort(this->vectorian.begin(), this->vectorian.end());
    return (this->vectorian.back() - this->vectorian.front());
}