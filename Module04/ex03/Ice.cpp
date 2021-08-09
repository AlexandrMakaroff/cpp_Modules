#include "Ice.hpp"

Ice::Ice():
	AMateria("ice")
{
}

Ice::Ice(const Ice& cp):
	AMateria(cp)
{
}

Ice::~Ice()
{
}

Ice&			Ice::operator=(const Ice& op)
{
	AMateria::operator=(op);
	return (*this);
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}

AMateria*		Ice::clone() const
{
	AMateria*	clone = new Ice(*this);
	return clone;
}