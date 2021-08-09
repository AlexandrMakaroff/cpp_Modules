#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name):
	ClapTrap(name + "_clap_name"),
	FragTrap(name),
	_name(name)
{
	this->setAttack(FragTrap(name).getAttack());
	this->setHit(FragTrap(name).getHit());
	std::cout << "Use DiamondTrap constructor" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& cp):
	ClapTrap(cp),
	FragTrap(cp),
	ScavTrap(cp)
{
	std::cout << "Use DiamondTrap copy constructor" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Use DiamondTrap destructor" << std::endl;
}

DiamondTrap&	DiamondTrap::operator = (DiamondTrap const& cp)
{
	this->_name = cp._name;
	this->_Hitpoints = cp._Hitpoints;
	this->_Energy_points = cp._Energy_points;
	this->_Attack_damage = cp._Attack_damage;
	return *this;
}

void	DiamondTrap::whoAmI()
{
	std::cout << this->_name << std::endl;
	std::cout << this->getName() << std::endl;
}