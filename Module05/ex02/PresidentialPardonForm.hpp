#ifndef PRESIDENTIAL_HPP
# define PRESIDENTIAL_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;
class Form;

class PresidentialPardonForm: public Form
{
private:
	void	action() const;
	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string);
	PresidentialPardonForm(PresidentialPardonForm&);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm&			operator=(PresidentialPardonForm&);

};

#endif