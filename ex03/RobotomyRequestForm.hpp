#ifndef ROBOTOMY_H 
#define ROBOTOMY_H

#include "AForm.hpp"
#include <string>

class RobotomyRequestForm : public AForm
{
private:
    const std::string _target;
    
public:
    RobotomyRequestForm(const std::string& target); // _signGrade = 72 _execGrade = 45
    RobotomyRequestForm(const RobotomyRequestForm& other); //todo

	void executeAction(Bureaucrat const &executor) const;
    // 50% du temps la target ou sinon print message de fail

    RobotomyRequestForm& operator=(const RobotomyRequestForm& other); // todo

    ~RobotomyRequestForm(); //todo
};









#endif
