#include "Bureaucrat.hpp"

int main() {
    try
    {
        Bureaucrat bureaucrat1("louqman", 5);
        Bureaucrat bureaucrat2("soufiane", 150);
        
        // test normal usage of operator "<<"
        std::cout << bureaucrat1 << std::endl;
        std::cout << bureaucrat2 << std::endl;

        // test grade too high
        Bureaucrat bureaucrat3("Omar", 0);
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        // test grsde too low 
        Bureaucrat bureaucrat4("salmane", 155);
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        // test to show that the try block stop in the 1st throw
        Bureaucrat bureaucrat5("1st", 155);
        Bureaucrat bureaucrat6("2nd", 0);
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        // show decrement in a wrong case:
        Bureaucrat bureaucrat7("sami", 150);
        bureaucrat7.decrement(1);
        std::cout << bureaucrat7 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}