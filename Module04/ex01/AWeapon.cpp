#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const& name, int apcost, int damage):
	_name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::AWeapon(AWeapon& weapon):
	_name(weapon._name),
	_apcost(weapon._apcost),
	_damage(weapon._damage)
{
}

AWeapon::~AWeapon()
{
}

std::string	AWeapon::getName() const
{
	return this->_name;
}

int	AWeapon::getAPCost() const
{
	return this->_apcost;
}

int	AWeapon::getDamage() const
{
	return this->_damage;
}

AWeapon&	AWeapon::operator=(AWeapon& op)
{
	this->_name = op.getName();
	this->_damage = op.getDamage();
	this->_apcost = op.getAPCost();
	return *this;
}

std::ostream&	operator<<(std::ostream &out, AWeapon& wp)
{
	out << wp.getName();
	return out;
}