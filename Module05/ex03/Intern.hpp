#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class	Intern
{
public:
	Intern();
	Intern(Intern&);
	virtual ~Intern();

	Intern&	operator=(Intern&);

	Form*	makeForm(std::string, std::string) const;

	class	ThereIsNoSuchForm: public std::exception
	{
		virtual const char*	what() const throw();
	};
};

#endif