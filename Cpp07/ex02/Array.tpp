#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template<typename T>
Array<T>::Array() :  array(NULL) , Size(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : array(new T[n]()), Size(n) {}

template<typename T>
Array<T>::Array(const Array& other) : array(NULL), Size(0)
{
    *this = other;
}

template<typename T>
Array<T>::~Array()
{
    delete[] array;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
    if (this != &other)
    {
        delete[] array;
        Size = other.Size;
        array = new T[Size];
        for (int i = 0; i < Size; i++)
            array[i] = other.array[i];
    }
    return (*this);
}

template<typename T>
int Array<T>::size() const
{
    return Size;
}

template <typename T>
T& Array<T>::operator[](int index) 
{
    if (index >= Size)
        throw outOfSize();
    return (array[index]);
}

template <typename T>
const T& Array<T>::operator[](int index) const
{
    if (index >= Size)
        throw outOfSize();
    return (array[index]);
}

template< typename T >
const char	*Array<T>::outOfSize::what() const throw()
{
	return ("Invalid index");
}

#endif