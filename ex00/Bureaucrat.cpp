#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : _name("random employee"), _grade(150)
{
    std::cout << _name << " has been created with the default grade: " << _grade << "\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if(_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        std::cout << _name << " has been created with grade: " << _grade << "\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade)
{
    std::cout << _name << " has been created by copy constructor with grade: " << _grade << "\n";
}

const std::string& Bureaucrat::getName() const
{
    return(_name);
}

int Bureaucrat::getGrade() const
{
    return(_grade);
}

void Bureaucrat::IncrGrade()
{
    if(_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        _grade -= 1;
}
void Bureaucrat::DecrGrade()
{
    if(_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade += 1;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)// a regarder comment initalisser la variable const _name
{
    if(this != &other)
    {
        this->_grade = other._grade;
    }
    return(*this);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << "\n";

    return (os);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << _name << " has been destroyed\n";
}