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
	std::string			_target;
	bool				_is_sign;
	int					_grade_sign;
	int					_grade_exec;
	Form();

protected:
	virtual void		action() const = 0;

public:
	Form(std::string const, int, int, std::string);
	Form(Form&);
	virtual ~Form();

	Form&			operator=(Form&);

	std::string			getName() const;
	std::string			getTarget() const;
	bool				getStatus();
	int					getGradeSign();
	int					getGradeExec();

	void				beSigned(Bureaucrat&);
	virtual void		execute(Bureaucrat const & executor) const;

	class	GradeTooHighException: public std::exception
	{
		virtual const char*	what()	const throw();
	};
	class	GradeTooLowException: public std::exception
	{
		virtual const char*	what()	const throw();
	};
	class	UnsignedFormException: public std::exception
	{
		virtual const char*	what()	const throw();
	};
};

std::ostream&	operator<<(std::ostream &out, Form& bur);

#endif