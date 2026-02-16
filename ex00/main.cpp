#include "Bureaucrat.hpp"

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
        std::cout << "bye " << b; // ne serai pas affiché psq DecrGrade occasionne une erreur qui est catch
        
        a = b;
    }
    catch(const std::exception& e)
    {
        std::cerr << "An error has occured: "<< e.what() << '\n';
    }
    
   
    return (0);

}