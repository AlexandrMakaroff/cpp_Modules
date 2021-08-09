#ifndef ROBOTOMY_HPP
# define ROBOTOMY_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;
class Form;

class RobotomyRequestForm: public Form
{
private:
	void	action() const;
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string);
	RobotomyRequestForm(RobotomyRequestForm&);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm&			operator=(RobotomyRequestForm&);

};

std::ostream&	operator<<(std::ostream &out, RobotomyRequestForm& bur);

#endif