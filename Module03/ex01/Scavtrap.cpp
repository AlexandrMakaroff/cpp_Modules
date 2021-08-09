#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):
	ClapTrap(name)
{
	this->_Attack_damage = 20;
	this->_Energy_points = 50;
	this->_Hitpoints = 100;
	std::cout << "Use child constructor" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& cpy):
	ClapTrap(cpy._name)
{
	this->_Attack_damage = 20;
	this->_Energy_points = 50;
	this->_Hitpoints = 100;
	std::cout << "Use child copy constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Use child destructor" << std::endl;
}

ScavTrap&	ScavTrap::operator = (ScavTrap const& op)
{
	this->_name = op._name;
	this->_Hitpoints = op._Hitpoints;
	this->_Energy_points = op._Energy_points;
	this->_Attack_damage = op._Attack_damage;
	return (*this);
}

void	ScavTrap::attack(std::string const& target)
{
	std::cout << "<" << this->_name << "> attacks <" << target \
	<< ">, causing <" << this->_Attack_damage << "> points of damage" << std::endl;
}

void		ScavTrap::guardGate()
{
	std::cout << "<" << this->_name << "> have enterred in Gate keeper mode" << std::endl;
}