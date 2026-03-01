#ifndef PRESIDENTIAL_H
#define PRESIDENTIAL_H

#include "AForm.hpp"
#include <string>
class PresidentialPardonForm : public AForm
{
  private:
    const std::string _target;

  public:
    PresidentialPardonForm(const std::string &target); // _signGrade = 25 _execGrade = 5
    PresidentialPardonForm(const PresidentialPardonForm &other); // todo

    void executeAction(Bureaucrat const &executor) const; // print "<target> has been pardoned by Zaphod Beeblebrox"

    PresidentialPardonForm &operator=(const PresidentialPardonForm &other); // todo

    ~PresidentialPardonForm();// todo
};

#endif
