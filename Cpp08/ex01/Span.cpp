#include "Span.hpp"

const char *outOfRange::what() const throw ()
{
    return ("Out of Range");
}

// OCCF:
Span::Span()
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