#include "Bureaucrat.hpp"



//tester fonction membre 
//ajouter le try and catch pour les erreur imprevues 
//puis test
//pas oublier valgrind

int main()
{
    try
    {
        Bureaucrat a = Bureaucrat("john", 10);

        Bureaucrat("samuel", 20);
    
        Bureaucrat b = Bureaucrat(a);

        Bureaucrat c = Bureaucrat();
        std::cout << "salut " << b;
        c.DecrGrade();
        std::cout << "bye " << b;
        
        a = b;
    }
    catch(const std::exception& e)
    {
        std::cerr << "An error has occured: "<< e.what() << '\n';
    }
    
   
    return (0);

}