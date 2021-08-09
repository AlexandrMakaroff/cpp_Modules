#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_Attack_damage = 3;
	this->_Energy_points = 100;
	this->_Hitpoints = 10;
	std::cout << "Use FragTrap constructor" << std::endl;
}

FragTrap::FragTrap(std::string name):
	ClapTrap(name)
{
	this->_Attack_damage = 3;
	this->_Energy_points = 100;
	this->_Hitpoints = 10;
	std::cout << "Use FragTrap constructor" << std::endl;
}

FragTrap::FragTrap(FragTrap& cp):
	ClapTrap(cp._name)
{
	std::cout << "Use FragTrap COPY constructor" << std::endl;
	this->_Attack_damage = 20;
	this->_Energy_points = 50;
	this->_Hitpoints = 100;
}

FragTrap::~FragTrap()
{
	std::cout << "Use FragTrap destructor" << std::endl;
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
