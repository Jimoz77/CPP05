#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <ostream>
#include "Bureaucrat.hpp"


class Form
{
private:
    const std::string _name;
    bool _signed;
    const int _signGrade;
    const int _execGrade;

public:
    Form();
    Form::Form(std::string& name, const int signGrade, const int execGrade); //pas sur ???
    Form(const Form& other);


    void beSigned(Bureaucrat& Bureaucrat);
    void signForm(Bureaucrat& Bureaucrat);
    Form& operator=(const Form& other);
    ~Form();
};




#endif