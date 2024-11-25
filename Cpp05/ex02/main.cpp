#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        // Test case 1: Basic form creation and signing
        Bureaucrat bob("Bob", 3);
        ShrubberyCreationForm shrub("home");
        RobotomyRequestForm robot("R2D2");
        PresidentialPardonForm pardon("Alice");

        // Test case 2: Signing forms
        bob.signForm(shrub);
        bob.signForm(robot);
        bob.signForm(pardon);

        // Test case 3: Executing forms using executeForm
        bob.executeForm(shrub);    // Should create home_shrubbery file
        bob.executeForm(robot);    // Should make drilling noises and robotomize
        bob.executeForm(pardon);   // Should pardon Alice

        // Test case 4: Trying to execute unsigned form
        ShrubberyCreationForm unsignedShrub("garden");
        bob.executeForm(unsignedShrub);  // Should fail with unsigned form message

        // Test case 5: Insufficient grade to execute
        Bureaucrat lowRank("Intern", 150);
        lowRank.executeForm(shrub);  // Should fail with grade too low message
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
