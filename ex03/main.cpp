#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(std::time(0)); // Toujours initialiser la graine pour Robotomy !

    Intern someRandomIntern;
    Bureaucrat boss("The Boss", 1);

    AForm* shrubbery;
    AForm* robotomy;
    AForm* pardon;
    AForm* unknown;

    std::cout << "\n=====================================" << std::endl;
    std::cout << "       TEST 1 : SHRUBBERY FORM       " << std::endl;
    std::cout << "=====================================\n" << std::endl;
    
    shrubbery = someRandomIntern.makeForm("shrubbery creation", "Garden");
    if (shrubbery != NULL) // On vérifie que la création a réussi
    {
        boss.signForm(*shrubbery);
        boss.executeForm(*shrubbery);
        delete shrubbery; // Ne pas oublier de libérer la mémoire !
    }

    std::cout << "\n=====================================" << std::endl;
    std::cout << "       TEST 2 : ROBOTOMY FORM        " << std::endl;
    std::cout << "=====================================\n" << std::endl;

    robotomy = someRandomIntern.makeForm("robotomy request", "Bender");
    if (robotomy != NULL)
    {
        boss.signForm(*robotomy);
        boss.executeForm(*robotomy);
        delete robotomy; // Libération de la mémoire
    }

    std::cout << "\n=====================================" << std::endl;
    std::cout << "     TEST 3 : PRESIDENTIAL FORM      " << std::endl;
    std::cout << "=====================================\n" << std::endl;

    pardon = someRandomIntern.makeForm("presidential pardon", "Arthur Dent");
    if (pardon != NULL)
    {
        boss.signForm(*pardon);
        boss.executeForm(*pardon);
        delete pardon; // Libération de la mémoire
    }

    std::cout << "\n=====================================" << std::endl;
    std::cout << "       TEST 4 : UNKNOWN FORM         " << std::endl;
    std::cout << "=====================================\n" << std::endl;

    // Le stagiaire ne devrait pas connaître ce formulaire
    unknown = someRandomIntern.makeForm("make me a coffee", "Intern");
    if (unknown != NULL)
    {
        boss.signForm(*unknown);
        boss.executeForm(*unknown);
        delete unknown;
    }

    std::cout << "\n=====================================" << std::endl;
    std::cout << "         FIN DES TESTS               " << std::endl;
    std::cout << "=====================================\n" << std::endl;

    return 0;
}
