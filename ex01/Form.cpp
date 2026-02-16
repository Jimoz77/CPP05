#include "Form.hpp"

Form::Form(const std::string& name, const int signGrade, const int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
    if (signGrade < 1 || execGrade < 1)
        throw Form::GradeTooHighException();
    if (signGrade > 150 || execGrade > 150)
        throw Form::GradeTooLowException();
    std::cout << _name << ", Form has been created\n";
}

Form::Form(const Form& other) : _name(other._name), _signed(other._signed), _signGrade(other._signGrade), _execGrade(other._execGrade)
{
    std::cout << _name << ", Form has been created by copy constructor\n";
}

const std::string& Form::getName() const
{
    return(_name);
}

bool Form::getSigned() const
{
    return (_signed);
}

int Form::getSignGrade() const
{
    return (_signGrade);
}

int Form::getExecGrade() const
{
    return (_execGrade);
}

void Form::beSigned(Bureaucrat& Bureaucrat)
{
    if(Bureaucrat.getGrade() <= _signGrade)
    {
        _signed = true;
    }
    else
    {
        throw Form::GradeTooLowException();
    }

}

Form& Form::operator=(const Form& other)
{
    if(this != &other)
    {
        _signed = other._signed;
    }
    return(*this);

}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
    os << "Form " << f.getName() 
       << ", signed: " << (f.getSigned() ? "yes" : "no")
       << ", sign grade: " << f.getSignGrade()
       << ", exec grade: " << f.getExecGrade();
    return os;
}

Form::~Form()
{
    std::cout << _name << ", form has been destroyed\n";
}