#include "PowerFist.hpp"

PowerFist::PowerFist():
	AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist& rifle):
	AWeapon(rifle)
{
}

PowerFist::~PowerFist()
{
}

PowerFist&	PowerFist::operator=(PowerFist& op)
{
	AWeapon::operator=(op);
	return *this;
}

std::ostream&	operator<<(std::ostream &out, PowerFist& rf)
{
	out << rf.getName();
	return out;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}