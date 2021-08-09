#include "AMateria.hpp"

AMateria::AMateria(std::string const& type):
	_type(type), _xp(0)
{
}

AMateria::AMateria(const AMateria& cp):
	_type(cp._type), _xp(cp._xp)
{
}

AMateria::~AMateria()
{
}

AMateria&			AMateria::operator=(const AMateria& op)
{
	this->_type = op.getType();
	this->_xp = op.getXP();
	return (*this);
}

std::string const&	AMateria::getType() const
{
	return (this->_type);
}

unsigned int		AMateria::getXP() const
{
	return (this->_xp);
}

void		AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}