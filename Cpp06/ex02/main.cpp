#include "Base.hpp"

int main()
{
    Base* ptr = generate();

    std::cout << "Identifying by pointer: " << std::endl;
    identify(ptr);

    std::cout << "Identifying by reference: " << std::endl;
    identify(*ptr);

    delete ptr;
    return 0;
}