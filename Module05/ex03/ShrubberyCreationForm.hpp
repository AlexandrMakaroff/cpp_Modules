#ifndef SHRUBY_HPP
# define SHRUBY_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;
class Form;

class ShrubberyCreationForm: public Form
{
private:
	void	action() const;
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string);
	ShrubberyCreationForm(ShrubberyCreationForm&);
	virtual	~ShrubberyCreationForm();

	ShrubberyCreationForm&			operator=(ShrubberyCreationForm&);

};

std::ostream&	operator<<(std::ostream &out, ShrubberyCreationForm& bur);

#endif