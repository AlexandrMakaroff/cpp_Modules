#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):
	_name(name), _Hitpoints(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "Use constructor" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& cpy):
	_name(cpy._name)
{
	std::cout << "Use copy constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Use destructor" << std::endl;
}

void			ClapTrap::setName(std::string name)
{
	this->_name = name;
}

std::string	ClapTrap::getName()
{
	return (this->_name);
}

ClapTrap&	ClapTrap::operator = (ClapTrap const& cpy)
{
	std::cout << "Use copy operator" << std::endl;
	this->_name = cpy._name;
	this->_Attack_damage = cpy._Attack_damage;
	this->_Energy_points = cpy._Energy_points;
	this->_Hitpoints = cpy._Hitpoints;
	return (*this);
}

std::ostream&	operator<<(std::ostream &out, ClapTrap& trap)
{
	out << trap.getName();
	return out;
}

void	ClapTrap::attack(std::string const& target)
{
	std::cout << "<" << this->getName() << "> attacks <" << target \
	<< ">, causing <" << this->_Attack_damage << "> points of damage" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "<" << this->getName() << "> takes <" << amount \
	<< ">, points of damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "<" << this->getName() << "> repaired <" << amount \
	<< ">, hitpoints" << std::endl;
}