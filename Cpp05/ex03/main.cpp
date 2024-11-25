
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try {
        // Test Intern creating different forms
        Intern someRandomIntern;
        AForm* scf = someRandomIntern.makeForm("shrubbery creation", "garden");
        AForm* rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        AForm* ppf = someRandomIntern.makeForm("presidential pardon", "Alice");
        
        // Create bureaucrats with different grades
        Bureaucrat boss("Boss", 1);
        Bureaucrat clerk("Clerk", 70);

        std::cout << "\n=== Testing valid forms ===\n" << std::endl;
        
        // Test Shrubbery Creation Form
        std::cout << *scf << std::endl;
        clerk.signForm(*scf);
        clerk.executeForm(*scf);
        std::cout << *scf << std::endl;

        // Test Robotomy Request Form
        std::cout << "\n" << *rrf << std::endl;
        boss.signForm(*rrf);
        boss.executeForm(*rrf);
        boss.executeForm(*rrf); // Execute twice to see different results
        std::cout << *rrf << std::endl;
        
        // Test Presidential Pardon Form
        std::cout << "\n" << *ppf << std::endl;
        boss.signForm(*ppf);
        boss.executeForm(*ppf);
        std::cout << *ppf << std::endl;

        // Test invalid form name
        std::cout << "\n=== Testing invalid form ===\n" << std::endl;
        AForm* invalid = someRandomIntern.makeForm("invalid form", "test");
        if (invalid == NULL)
            std::cout << "Form creation failed as expected" << std::endl;

        // Cleanup
        delete scf;
        delete rrf;
        delete ppf;
    }
    catch (std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}