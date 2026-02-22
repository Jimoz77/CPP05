#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{

    try {
        Bureaucrat boss("The Boss", 1);
        Bureaucrat intern("The Intern", 150);

        ShrubberyCreationForm shrub("Home");
        RobotomyRequestForm robot("Bender");
        PresidentialPardonForm pardon("Arthur Dent");

        std::cout << "\n--- TEST SHRUBBERY ---" << std::endl;
        intern.executeForm(shrub); // Fail: not signed
        boss.signForm(shrub);
        boss.executeForm(shrub); // Success: file created

        std::cout << "\n--- TEST ROBOTOMY ---" << std::endl;
        boss.signForm(robot);
        boss.executeForm(robot); // 50% chance
        boss.executeForm(robot); // Try again to see random

        std::cout << "\n--- TEST PARDON ---" << std::endl;
        boss.signForm(pardon);
        intern.executeForm(pardon); // Fail: grade too low
        boss.executeForm(pardon);   // Success
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
