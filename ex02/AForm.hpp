#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>


class Bureaucrat;

class AForm
{
private:
	const std::string _name;
	bool _signed;
	const int _signGrade;
	const int _execGrade;

public:
	AForm();
	AForm(const std::string &name, const int signGrade, const int execGrade);
	AForm(const AForm &other);

	void beSigned(const Bureaucrat &bureaucrat);
	void execute(Bureaucrat const &executor) const;
	virtual void executeAction(Bureaucrat const &executor) const = 0; // todo

	const std::string &getName() const;
	bool getSigned() const;
	int getSignGrade() const;
	int getExecGrade() const;

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

	class NotSignedException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("Error : signature missing. This form should be signed to be executed\n");
		}
	};

	AForm &operator=(const AForm &other);
	virtual ~AForm();
};

std::ostream &operator<<(std::ostream &os, const AForm &f);

#endif
