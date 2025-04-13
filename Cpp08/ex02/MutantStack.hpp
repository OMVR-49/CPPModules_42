#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T> {
public:
    // OCCF:
    MutantStack() : std::stack<T>() {}
    MutantStack(const MutantStack& other) : std::stack<T>(other) {}
    MutantStack& operator=(const MutantStack& other) {
        if (this != &other)
            std::stack<T>::operator=(other);
        return *this;
    }
    ~MutantStack() {}
    // Ex requirements:
    // Iterator typedefs - using the underlying container's iterators
    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;

    // Iterator methods:
    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }

    const_iterator begin() const { return this->c.begin(); }
    const_iterator end() const { return this->c.end(); }
};

#endif