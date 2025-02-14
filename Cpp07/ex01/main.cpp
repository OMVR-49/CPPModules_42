#include "iter.hpp"

int main()
{
    std::cout << "intArray: " << std::endl;
    int intArray[] = {1, 2 ,3 ,4 ,5};
    iter(intArray, 5, printE<int>);
    std::cout << "--------------------" << std::endl;
    
    std::cout << "doubleArray: " << std::endl;
    double doubleArray[] = {1.1, 2.2 ,3.3 ,4.4 ,5.5};
    iter(doubleArray, 5, printE<double>);
    std::cout << "--------------------" << std::endl;

    std::cout << "charArray: " << std::endl;
    char charArray[] = {'a', 'b' ,'c' ,'d' ,'e'};
    iter(charArray, 5, printE<char>);
    
    return 0;
}