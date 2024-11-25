#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try
    {
        Bureaucrat bob("Bob", 1);
        Bureaucrat alice("Alice", 150);
        Form formA("A", 50, 25);

        // Test 1: Insertion operator of form test:
        std::cout << formA << std::endl;
        // Test 2: Bureaucrat with a high enough grade to signs
        bob.signForm(formA);
        std::cout << formA << std::endl;
        // Test 3: Bureaucrat with too low a grade tries to sign
        alice.signForm(formA);
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        // Test 4: Form with an invalid high required grade
        Form formC("C", 0, 5);
    }
    catch (const std::exception& e)
    {
        std::cout<< e.what() << std::endl;
    }
    try
    {
        // Test 5: Form with an invalid low required grade to execute
        Form formD("D", 150, 151);
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        // Test 6: Increment grade to required one
        Bureaucrat chris("Chris", 5);
        std::cout << chris << std::endl;
        chris.increment(2);  // Should bring grade to 1
        Form FormE("E", 3, 3);
        chris.signForm(FormE);
        std::cout << FormE << std::endl;
        // Test 7: Decrement and retry
        chris.decrement(2);  // Should bring grade to 1
        chris.signForm(FormE);
        std::cout << FormE << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}