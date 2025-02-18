#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {
private:
    T* array;
    int Size;
public:
    Array();
    Array(unsigned int n);
    Array(const Array& other);
    ~Array();

    Array& operator=(const Array& other);
    
    int size() const;
    T& operator[](int index);
    const T& operator[](int index) const;
    class outOfSize : public std::exception
    {
        public:
			virtual const char	*what() const throw();
    };
};

#include "Array.tpp"

#endif