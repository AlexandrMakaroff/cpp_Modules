#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
	_name("NONE"), _Hitpoints(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "Use ClapTrap constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name):
	_name(name), _Hitpoints(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "Use ClapTrap constructor" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& cpy):
	_name(cpy._name)
{
	std::cout << "Use ClapTrap copy constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Use ClapTrap destructor" << std::endl;
}

void			ClapTrap::setAttack(unsigned int at)
{
	this->_Attack_damage = at;
}

void			ClapTrap::setHit(unsigned int hit)
{
	this->_Hitpoints = hit;
}

void			ClapTrap::setEnergy(unsigned int en)
{
	this->_Energy_points = en;
}

void			ClapTrap::setName(std::string name)
{
	this->_name = name;
}

unsigned int	ClapTrap::getAttack()
{
	return this->_Attack_damage;
}

unsigned int	ClapTrap::getEnergy()
{
	return this->_Energy_points;
}

unsigned int	ClapTrap::getHit()
{
	return this->_Hitpoints;
}

std::string	ClapTrap::getName()
{
	return (this->_name);
}

ClapTrap&	ClapTrap::operator = (ClapTrap const& cpy)
{
	std::cout << "Use ClapTrap copy operator" << std::endl;
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