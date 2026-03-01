
#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"




Intern::Intern(const Intern &other)
{
	*this = other;
}
AForm* Intern::makeShrubbery(const std::string& target) const
{
	AForm* result = new ShrubberyCreationForm(target);
	return result;
}
AForm* Intern::makeRobotomy(const std::string& target) const
{
	AForm* result = new RobotomyRequestForm(target);
	return result;
}
AForm* Intern::makePresidential(const std::string& target) const
{
	AForm* result = new PresidentialPardonForm(target);
	return result;
}
AForm* Intern::makeForm(const std::string& formName,const std::string& target) const
{
	for (size_t i = 0; i < 3; i++)
	{
		if(_formName[i] == formName)
		{
			std::cout << "Intern creates " << formName << "\n";
			return(this->*_makeFunctions[i])(target);
		}
	}	
	std::cerr << "This form name doesn't exist\n";
	return NULL;
}
Intern::Intern()
{
	_makeFunctions[0] = &Intern::makeShrubbery;
	_makeFunctions[1] = &Intern::makeRobotomy;
	_makeFunctions[2] = &Intern::makePresidential;
	_formName[0] = "shrubbery creation";
	_formName[1] = "robotomy request";
	_formName[2] = "presidential pardon";
}

Intern& Intern::operator=(const Intern &other)
{
	if(this != &other)
	{
		_makeFunctions[0] = other._makeFunctions[0];
		_makeFunctions[1] = other._makeFunctions[1];
		_makeFunctions[2] = other._makeFunctions[2];
		_formName[0] = other._formName[0];
		_formName[1] = other._formName[1];
		_formName[2] = other._formName[2];
	}
	return(*this);
}

Intern::~Intern()
{

}

