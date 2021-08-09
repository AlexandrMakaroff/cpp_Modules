#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;
	Bureaucrat();
public:
	Bureaucrat(std::string const, int);
	Bureaucrat(Bureaucrat&);
	virtual ~Bureaucrat();

	Bureaucrat&			operator=(Bureaucrat&);

	std::string			getName() const;
	int					getGrade() const;

	void				inc();
	void				dec();
	void				signForm(Form&);
	void				executeForm(Form const& form);

	class	GradeTooHighException: public std::exception
	{
		virtual const char*	what()	const throw();
	};
	class	GradeTooLowException: public std::exception
	{
		virtual const char*	what()	const throw();
	};
};

std::ostream&	operator<<(std::ostream &out, Bureaucrat& bur);

#endif