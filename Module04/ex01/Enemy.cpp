#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const& type):
	_type(type), _hp(hp)
{
}

Enemy::Enemy(Enemy& cp):
	_type(cp._type), _hp(cp._hp)
{
}

Enemy::~Enemy()
{
}

Enemy&		Enemy::operator=(Enemy& op)
{
	this->_hp = op._hp;
	this->_type = op._type;
	return *this;
}

std::string	Enemy::getType() const
{
	return this->_type;
}

int			Enemy::getHP() const
{
	return this->_hp;
}

void	Enemy::takeDamage(int dmg)
{
	if (dmg > 0)
	{
		this->_hp = (dmg >= this->_hp) ? 0 : this->_hp - dmg;
	}
}