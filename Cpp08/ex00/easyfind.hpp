#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>

class NotFoundException : public std::exception {
public:
    const char* what() const throw();
};

template <typename T>
typename T::const_iterator easyfind(const T &container, int value);

#include "easyfind.tpp"

#endif