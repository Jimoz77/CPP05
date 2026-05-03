#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45 ), _target(target)
{

}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), _target(other._target)
{

}

bool	fifty_fifty_bool()
{
	static bool seeded = false;
	if(!seeded)
	{
		std::srand(std::time(NULL));
		seeded = true;
	}
	if(std::rand() % 2 == 0)
		return (true);
	return(false);
}

void RobotomyRequestForm::executeAction(Bureaucrat const &executor) const
{
	(void)executor;
	if(fifty_fifty_bool())
		std::cout << "* drilling noise * " << _target << " has been robotomized succesfully\n";
	else
		std::cout << "* drilling noise *... Robotomy failed, try again...\n";
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) // todo
{
	if(this != &other)
	{
		AForm::operator=(other);
	}
	return (*this);
}
RobotomyRequestForm::~RobotomyRequestForm() //todo
{
    
}
