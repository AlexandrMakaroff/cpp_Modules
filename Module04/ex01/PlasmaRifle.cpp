#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():
	AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle& rifle):
	AWeapon(rifle)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle&	PlasmaRifle::operator=(PlasmaRifle& op)
{
	AWeapon::operator=(op);
	return *this;
}

std::ostream&	operator<<(std::ostream &out, PlasmaRifle& rf)
{
	out << rf.getName();
	return out;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}