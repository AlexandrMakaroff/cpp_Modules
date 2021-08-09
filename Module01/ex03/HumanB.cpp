#include "HumanB.hpp"

HumanB::HumanB(const std::string& name):_name(name), _weapon(nullptr)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon& _weapon)
{
	this->_weapon = &_weapon;
}

void	HumanB::attack()
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " can't attack because he haven't weapon" << std::endl;
}