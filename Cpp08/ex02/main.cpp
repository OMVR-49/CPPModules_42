#include "MutantStack.hpp"
#include <list>

int main()
{
    // Test with MutantStack as per the subject
    std::cout << "===== Testing with MutantStack(Ssubject test) =====" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);

    std::cout << "Top: " << mstack.top() << std::endl;

    mstack.pop();
    std::cout << "Size after pop: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << "Iterating through MutantStack:" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack);
    std::cout << "Created a standard stack from MutantStack. Size: " << s.size() << std::endl;

    // Test with std::list for comparison
    std::cout << "\n===== Testing with std::list =====" << std::endl;
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);

    std::cout << "Back: " << lst.back() << std::endl;

    lst.pop_back();
    std::cout << "Size after pop: " << lst.size() << std::endl;

    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);

    std::cout << "Iterating through std::list:" << std::endl;
    std::list<int>::iterator lst_it = lst.begin();
    std::list<int>::iterator lst_ite = lst.end();

    ++lst_it;
    --lst_it;

    while (lst_it != lst_ite)
    {
        std::cout << *lst_it << std::endl;
        ++lst_it;
    }

    // Testing const iterator
    const MutantStack<int> const_mstack = mstack;
    std::cout << "Const iteration:" << std::endl;
    MutantStack<int>::const_iterator cit = const_mstack.begin();
    MutantStack<int>::const_iterator cite = const_mstack.end();

    while (cit != cite)
    {
        std::cout << *cit << std::endl;
        ++cit;
    }

    // Test with different type
    MutantStack<std::string> strStack;
    strStack.push("Hello");
    strStack.push("World");
    strStack.push("!");

    std::cout << "String stack iteration:" << std::endl;
    MutantStack<std::string>::iterator str_it = strStack.begin();
    MutantStack<std::string>::iterator str_ite = strStack.end();

    while (str_it != str_ite)
    {
        std::cout << *str_it << std::endl;
        ++str_it;
    }
    return 0;
}