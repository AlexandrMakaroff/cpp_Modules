#include "Character.hpp"
#include "AWeapon.hpp"

Character::Character(std::string const& name):
	_name(name), _ap(40), _weapon(nullptr)
{
}

Character::Character(Character& cp):
	_name(cp._name), _ap(cp._ap), _weapon(cp._weapon)
{
}

Character::~Character()
{
}

Character&		Character::operator=(Character& op)
{
	this->_name = op._name;
	this->_ap = op._ap;
	this->_weapon = op._weapon;
	return *this;
}

std::string	Character::getName() const
{
	return this->_name;
}

int			Character::getAP() const
{
	return this->_ap;
}

AWeapon*	Character::getWeapon() const
{
	return (this->_weapon);
}

void		Character::attack(Enemy* en)
{
	if (!this->_weapon || this->_ap < this->_weapon->getAPCost())
		return ;
	this->_ap -= this->_weapon->getAPCost();
	std::cout << this->_name << " attacks " << \
	en->getType() << " with a " << this->_weapon->getName() << std::endl;
	this->getWeapon()->attack();
	en->takeDamage(this->_weapon->getDamage());
	// std::cout << en->getHP() << std::endl;
	if (en->getHP() <= 0)
		delete en;
}

void		Character::equip(AWeapon* wp)
{
	this->_weapon = wp;
}

void		Character::recoverAP()
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

std::ostream&	operator<<(std::ostream& out, Character& hero)
{
	if (hero.getWeapon())
		out << hero.getName() << " has " << hero.getAP() << \
		" AP and wields a " << hero.getWeapon()->getName() << std::endl;
	else
		out << hero.getName() << " has " << hero.getAP() << " AP and is unarmed" << std::endl;
	return out;
}