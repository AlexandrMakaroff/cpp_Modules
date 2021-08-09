#include "Form.hpp"

Form::Form(std::string const name, int grade_sign, int grade_exec):
	_name(name), _is_sign(false), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
	if (this->_grade_exec < 1)
		throw Form::GradeTooLowException();
	if (this->_grade_exec > 150)
		throw Form::GradeTooHighException();
	if (this->_grade_sign < 1)
		throw Form::GradeTooLowException();
	if (this->_grade_sign > 150)
		throw Form::GradeTooHighException();
}

Form::Form(Form& cp):
	_name(cp._name),
	_is_sign(cp._is_sign),
	_grade_sign(cp._grade_sign),
	_grade_exec(cp._grade_exec)
{}

Form::~Form()
{}

Form&			Form::operator=(Form& op)
{
	this->_is_sign = op._is_sign;
	this->_grade_sign = op._grade_sign;
	this->_grade_exec = op._grade_exec;
	return *this;
}

bool				Form::getStatus()
{
	return (this->_is_sign);
}

std::string const	Form::getName()
{
	return (this->_name);
}

int					Form::getGradeSign()
{
	return (this->_grade_sign);
}

int					Form::getGradeExec()
{
	return (this->_grade_exec);
}

void				Form::beSigned(Bureaucrat* ber)
{
	if (ber->getGrade() <= this->_grade_sign)
	{
		this->_is_sign = true;
		ber->signForm(*this);
	}
	else
	{
		ber->signForm(*this);
		throw Form::GradeTooLowException();
	}
}

std::ostream&	operator<<(std::ostream &out, Form& bur)
{
	out << bur.getName() << ",  Form grade signed, " << bur.getGradeSign() << ", Form grade execution " << bur.getGradeExec();
	return out;
}

const char*		Form::GradeTooHighException::what() const throw()
{
	return "The grade is too hight";
}

const char*		Form::GradeTooLowException::what() const throw()
{
	return "The grade is too low";
}