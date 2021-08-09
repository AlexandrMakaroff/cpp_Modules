#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine& cp)
{
	(void)cp;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine&	TacticalMarine::operator=(TacticalMarine& op)
{
	(void)op;
	return *this;
}

ISpaceMarine*	TacticalMarine::clone() const
{
	TacticalMarine* cpy = new TacticalMarine(*this);
	return (cpy);
}

void			TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void			TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}