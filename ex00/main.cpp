#include "Bureaucrat.hpp"
#include <iostream>

int main()
{

	std::cout << "\n\nTESTS WITHOUT ERRORS :\n\n";
	try
	{
        Bureaucrat normal = Bureaucrat("John", 42);
        std::cout << normal; // Test de l'opérateur <<
        normal.IncrGrade();
        std::cout << "Apres incrementation : " << normal;
        normal.DecrGrade();
        std::cout << "Apres decrementation : " << normal;
	}
	catch (const std::exception &e)
	{
		std::cerr << "An error has occured: " << e.what() << std::endl;
	}

	std::cout << "\n\nTESTS WITH ERRORS :\n\n";

    try
    {
        Bureaucrat a = Bureaucrat();
        a.DecrGrade(); // impossible de decrementer 150
    }
    catch(const std::exception& e)
    {
        std::cerr << "An error has occured: "<< e.what() << std::endl;
    }

	try
	{
		Bureaucrat b = Bureaucrat("gerald", 1);
		b.IncrGrade(); // impossible d incrementer 1
	}
	catch (const std::exception &e)
	{	
        std::cerr << "An error has occured: "<< e.what() << std::endl;
	}

	try
	{
		Bureaucrat a = Bureaucrat("cedric", 0); // grade 0 n est pas possible car plus grand que 1
	}
	catch (const std::exception &e)
	{
		std::cerr << "An error has occured: " << e.what() << std::endl;
	}

	try
	{	
		Bureaucrat d = Bureaucrat("fred", 151); // grade 151 n est pas possible car plus petit que 150
	}
	catch (const std::exception &e)
	{	
        std::cerr << "An error has occured: "<< e.what() << std::endl;
	}

    return (0);

}
