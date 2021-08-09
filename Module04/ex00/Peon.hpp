#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class	Peon: public Victim
{
private:
	Peon();
public:
	Peon(std::string);
	Peon(Peon&);
	virtual ~Peon();

	Peon&		operator = (Peon&);

	void		introduce(void);
	void		getPolymorphed() const;
};

#endif