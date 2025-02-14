#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {
private:
    T* array;
    size_t Size;
public:
    Array();
    Array(unsigned int n);
    Array(const Array& other);
    ~Array();

    Array& operator=(const Array& other);
    
    size_t size() const;
    T& operator[](size_t index);
    class outOfSize : public std::exception
    {
        public:
			virtual const char	*what() const throw();
    };
};

#include "Array.tpp"

#endif