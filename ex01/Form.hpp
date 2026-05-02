#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <ostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string _name;
    bool _signed;
    const int _signGrade;
    const int _execGrade;

public:
    Form();
    Form(const std::string& name, const int signGrade, const int execGrade);
    Form(const Form& other);


    void beSigned(Bureaucrat& bureaucrat);
    
    const std::string&  getName() const;
    bool                getSigned() const;
    int                 getSignGrade() const;
    int                 getExecGrade() const;

    class GradeTooHighException : public std::exception
    {
        public:
                    virtual const char* what() const throw()
                    {
                        return ("Error : grade is too high. Grade should be lower than 1.\n");
                    }

    };

    class GradeTooLowException : public std::exception
    {
        public :
                    virtual const char* what() const throw()
                    {
                        return ("Error : grade is too low. Grade should be higher than 150.\n");
                    }
    };

    Form& operator=(const Form& other);
    ~Form();
};

std::ostream& operator<<(std::ostream& os, const Form& f);


#endif
