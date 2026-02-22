#ifndef SHRUBBERY_H
#define SHRUBBERY_H

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <string>


class ShrubberyCreationForm : public AForm
{
private:
    const std::string _target;

public:
    ShrubberyCreationForm(const std::string& target); // _signGrade = 145 _execGrade = 137
    ShrubberyCreationForm(const ShrubberyCreationForm& other); // todo


	void executeAction(Bureaucrat const &executor) const;


    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other); //todo


    ~ShrubberyCreationForm(); // todo
};



#endif
