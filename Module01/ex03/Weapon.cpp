#include "Weapon.hpp"

Weapon::Weapon():_type("")
{
}

Weapon::~Weapon()
{
}

void	Weapon::setType(const std::string &type)
{
	this->_type = type;
}

const std::string&	Weapon::getType()
{
	return (this->_type);
}

Weapon::Weapon(std::string const &type):_type(type)
{
}