#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>

class Intern
{
private:
	
	std::string _formName[3];
	AForm* (Intern::*_makeFunctions[3])(const std::string& target) const;
    // 3 petites fonctions privées qui savent construire chaque formulaire
    AForm* makeShrubbery(const std::string& target) const;
    AForm* makeRobotomy(const std::string& target) const;
    AForm* makePresidential(const std::string& target) const;

public:
    Intern();
    Intern(const Intern& other);
    Intern& operator=(const Intern& other);
    ~Intern();

    AForm* makeForm(const std::string& formName, const std::string& target) const;
};

#endif
