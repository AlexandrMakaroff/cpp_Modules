#include "RadScorpion.hpp"

RadScorpion::RadScorpion():
	Enemy(80, "Rad Scorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion& cp):
	Enemy(cp)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion&	RadScorpion::operator=(RadScorpion& op)
{
	Enemy::operator=(op);
	return *this;
}

void			RadScorpion::takeDamage(int dmg)
{
	Enemy::takeDamage(dmg);
}