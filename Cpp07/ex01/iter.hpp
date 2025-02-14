#ifndef iter_HPP
#define iter_HPP

#include <iostream>

template <typename T, typename Func> 
void iter(T *a, int lenght, Func f)
{
    for (int i = 0; i < lenght ; i++)
    {
        f(a[i]);
    }
}

template <typename T>
void printE(const T& p)
{
    std::cout << p << std::endl;
}

#endif