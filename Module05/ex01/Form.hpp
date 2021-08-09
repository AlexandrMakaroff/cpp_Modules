#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const	_name;
	bool				_is_sign;
	int					_grade_sign;
	int					_grade_exec;
	Form();
public:
	Form(std::string const, int, int);
	Form(Form&);
	virtual ~Form();

	Form&			operator=(Form&);

	std::string const	getName();
	bool				getStatus();
	int					getGradeSign();
	int					getGradeExec();

	void				beSigned(Bureaucrat*);

	class	GradeTooHighException: public std::exception
	{
		virtual const char*	what()	const throw();
	};
	class	GradeTooLowException: public std::exception
	{
		virtual const char*	what()	const throw();
	};
};

std::ostream&	operator<<(std::ostream &out, Form& bur);

#endif