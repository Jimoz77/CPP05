#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <string>

class AForm;

class Bureaucrat
{
  private:
    const std::string _name; // a voir si possible d initialiser depuis le
                           // constructeur sinon a changer
    int _grade;

  public:
    Bureaucrat(); // def
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &other); // copy

    const std::string &getName() const;
    int getGrade() const;
    void signForm(AForm &Form);
    void executeForm(AForm const &form) const; // todo

    void IncrGrade();
    void DecrGrade();

    class GradeTooHighException : public std::exception
    {
      public:
        virtual const char *what() const throw()
        {
          return ("Error : grade is too high. Grade should be lower than 1\n");
        }
    };

    class GradeTooLowException : public std::exception
    {
      public:
        virtual const char *what() const throw()
        {
          return ("Error : grade is too low. Grade should be higher than 150\n");
        }
    };

    Bureaucrat &operator=(const Bureaucrat &other); // op

    ~Bureaucrat(); // destru
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);

#endif
