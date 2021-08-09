#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	b("Jake");
	ScavTrap	c(b);

	c.attack("Monster");
	b.guardGate();
	return (0);
}