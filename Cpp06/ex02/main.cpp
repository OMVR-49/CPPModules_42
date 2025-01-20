#include "Base.hpp"

int main()
{
    Base* ptr = generate();
    
    std::cout << "Identifying by pointer: ";
    identify(ptr);
    
    std::cout << "Identifying by reference: ";
    identify(*ptr);
    
    delete ptr;
    return 0;
}