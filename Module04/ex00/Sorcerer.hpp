#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"
# include "Peon.hpp"

class	Sorcerer
{
private:
	std::string	_name;
	std::string	_title;
	Sorcerer();
public:
	Sorcerer(std::string, std::string);
	Sorcerer(Sorcerer&);
	~Sorcerer();

	Sorcerer&	operator = (Sorcerer&);

	void		setName(std::string);
	void		setTitle(std::string);
	std::string	getName();
	std::string	getTitle();

	void		introduce(void);
	void		polymorph(Victim const&) const;
};

std::ostream&	operator<<(std::ostream &out, Sorcerer& sor);

#endif