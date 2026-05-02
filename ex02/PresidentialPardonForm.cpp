#include "PresidentialPardonForm.hpp"
#include <iostream>
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm("PresidentialPardonForm", 25, 5), _target(target) // _signGrade = 25 _execGrade = 5
{
  // print default constructor
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other), _target(other._target)
{

}

void PresidentialPardonForm::executeAction(Bureaucrat const &executor) const // print "<target> has been pardoned by Zaphod Beeblebrox"
{
	(void)executor;
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox\n";
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() // todo
{
  
}
