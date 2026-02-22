#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45 ), _target(target)
{

}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), _target(other._target)
{

}

bool	fifty_fifty_bool()
{
	static int seed = 7821;

	seed = (seed * 3221 + 7942);
	return(seed % 2 == 0);
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
