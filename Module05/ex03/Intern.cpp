#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{}

Intern::Intern(Intern& cp)
{
	(void)cp;
}

Intern::~Intern()
{}

Intern&	Intern::operator=(Intern& op)
{
	(void)op;
	return (*this);
}

Form*	Intern::makeForm(std::string name, std::string target) const
{
	Form	*form = nullptr;

	std::string	types[6] =
	{
		"RobotomyRequestForm",
		"robotomy request",
		"ShrubberyCreationForm",
		"shrubbery creation",
		"PresidentialPardonForm",
		"presidential pardon"
	};
	for (int i = 0; i < 6; i++)
	{
		if (name == types[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			switch (i)
			{
				case 0: form = new RobotomyRequestForm(target);
					break;
				case 1: form = new RobotomyRequestForm(target);
					break;
				case 2: form = new ShrubberyCreationForm(target);
					break;
				case 3: form = new ShrubberyCreationForm(target);
					break;
				case 4: form = new PresidentialPardonForm(target);
					break;
				case 5: form = new PresidentialPardonForm(target);
					break;
				default:
					break;
			}
			return (form);
		}
	}
	throw Intern::ThereIsNoSuchForm();
}

const char*	Intern::ThereIsNoSuchForm::what() const throw()
{
	return "There is no such form";
}