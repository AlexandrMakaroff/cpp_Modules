#include "SuperMutant.hpp"

SuperMutant::SuperMutant():
	Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant& cp):
	Enemy(cp)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant&	SuperMutant::operator=(SuperMutant& op)
{
	Enemy::operator=(op);
	return *this;
}

void			SuperMutant::takeDamage(int dmg)
{
	Enemy::takeDamage(dmg - 3);
}