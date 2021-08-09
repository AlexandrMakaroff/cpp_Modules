#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):
	ClapTrap(name)
{
	this->_Attack_damage = 30;
	this->_Energy_points = 100;
	this->_Hitpoints = 100;
	std::cout << "NEW CONSTRUCTOR" << std::endl;
}

FragTrap::FragTrap(FragTrap& cp):
	ClapTrap(cp._name)
{
	std::cout << "NEW COPY CONSTRUCTOR" << std::endl;
	this->_Attack_damage = 20;
	this->_Energy_points = 50;
	this->_Hitpoints = 100;
}

FragTrap::~FragTrap()
{
	std::cout << "NEW DESTRUCTOR" << std::endl;
}

FragTrap&	FragTrap::operator = (FragTrap const& op)
{
	this->_name = op._name;
	this->_Attack_damage = op._Attack_damage;
	this->_Energy_points = op._Energy_points;
	this->_Hitpoints = op._Hitpoints;
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "1 requset" << std::endl;
	std::cout << "2 requset" << std::endl;
	std::cout << "3 requset" << std::endl;
	std::cout << "4 requset" << std::endl;
	std::cout << "5 requset" << std::endl;
}
