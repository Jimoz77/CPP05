#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("some paper"), _signed(false), _signGrade(150), _execGrade(150)
{

}
AForm::AForm(const std::string& name, const int signGrade, const int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
    if (signGrade < 1 || execGrade < 1)
        throw AForm::GradeTooHighException();
    if (signGrade > 150 || execGrade > 150)
        throw AForm::GradeTooLowException();
    std::cout << _name << ", Form has been created\n";
}

AForm::AForm(const AForm& other) : _name(other._name), _signed(other._signed), _signGrade(other._signGrade), _execGrade(other._execGrade)
{
    std::cout << _name << ", Form has been created by copy constructor\n";
}

const std::string& AForm::getName() const
{
    return(_name);
}

bool AForm::getSigned() const
{
    return (_signed);
}

int AForm::getSignGrade() const
{
    return (_signGrade);
}

int AForm::getExecGrade() const
{
    return (_execGrade);
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if(bureaucrat.getGrade() <= _signGrade)
    {
        _signed = true;
    }
    else
    {
        throw AForm::GradeTooLowException();
    }

}

void AForm::execute(Bureaucrat const & executor) const
{
    if(_signed == true)
    {
        if(executor.getGrade() <= _execGrade)
            executeAction(executor);
        else
            throw AForm::GradeTooLowException();
    }
    else
        throw AForm::NotSignedException();
}
AForm& AForm::operator=(const AForm& other)
{
    if(this != &other)
    {
        _signed = other._signed;
    }
    return(*this);

}

std::ostream& operator<<(std::ostream& os, const AForm& f)
{
    os << "Form " << f.getName() 
       << ", signed: " << (f.getSigned() ? "yes" : "no")
       << ", sign grade: " << f.getSignGrade()
       << ", exec grade: " << f.getExecGrade();
    return os;
}

AForm::~AForm()
{
    std::cout << _name << ", form has been destroyed\n";
}
