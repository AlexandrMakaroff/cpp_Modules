#include "Cure.hpp"

Cure::Cure():
	AMateria("cure")
{
}

Cure::Cure(const Cure& cp):
	AMateria(cp)
{
}

Cure::~Cure()
{
}

Cure&			Cure::operator=(const Cure& op)
{
	AMateria::operator=(op);
	return (*this);
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}

AMateria*		Cure::clone() const
{
	AMateria*	clone = new Cure(*this);
	return clone;
}