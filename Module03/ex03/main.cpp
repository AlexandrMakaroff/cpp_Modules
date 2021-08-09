#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	trap("Bob");
	DiamondTrap	copy(trap);
	DiamondTrap	tom("Tom");

	trap.attack("Tom");
	copy = tom;
	trap.whoAmI();
	std::cout << "Hitpoints: " << trap.getHit() << "\nEnergy: " << trap.getEnergy() << "\nAttack damage: " << trap.getAttack() << std::endl;
	copy.attack("Bob");
	copy.whoAmI();
	return (0);
}