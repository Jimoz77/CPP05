#include "Form.hpp"

Form::Form(std::string& name, const int signGrade, const int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
    //print de constructeur
}

Form::Form(const Form& other) : _name(other._name), _signed(false), _signGrade(other._signGrade), _execGrade(other._execGrade)
{
    //print de constructeur
}


void Form::beSigned(Bureaucrat& Bureaucrat)
{

}
void Form::signForm(Bureaucrat& Bureaucrat)
{

}


Form& Form::operator=(const Form& other)
{
    if(this != &other)
    {
        //copy de variable
    }
    return(*this);

}


Form::~Form()
{
    std::cout << _name << ", form has been destroyed\n";
}