#include "Bureaucrat.hpp"

class Form;

Bureaucrat::Bureaucrat(std::string const name, int grade):
	_name(name), _grade(grade)
{
	// std::cout << "Constructor" << std::endl;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooLowException();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(Bureaucrat& cp):
	_name(cp._name), _grade(cp._grade)
{}

Bureaucrat::~Bureaucrat()
{
	// std::cout << "Destructor" << std::endl;
}

Bureaucrat&			Bureaucrat::operator=(Bureaucrat& op)
{
	this->_grade = op._grade;
	return *this;
}

std::string			Bureaucrat::getName() const
{
	return (this->_name);
}

int					Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void				Bureaucrat::inc()
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooLowException();
}

void				Bureaucrat::dec()
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

void				Bureaucrat::signForm(Form& form)
{
	if (form.getStatus())
		std::cout << this->_name << " sign " << form.getName() << std::endl;
	else
		std::cout << this->_name << " cannot sign " << form.getName() << \
		" because he does not have proper level" << std::endl;
}

void				Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executes " << form.getName() << std::endl;
	}
	catch (std::string& e)
	{
		std::cout << this->_name << " cants execute " << form.getName();
	}
}

std::ostream&	operator<<(std::ostream &out, Bureaucrat& bur)
{
	out << bur.getName() << ", bureaucrat grade " << bur.getGrade();
	return out;
}

const char*		Bureaucrat::GradeTooHighException::what() const throw()
{
	return "The grade is too hight";
}

const char*		Bureaucrat::GradeTooLowException::what() const throw()
{
	return "The grade is too low";
}