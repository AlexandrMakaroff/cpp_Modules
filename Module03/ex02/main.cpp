#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	FragTrap	b("Tom");
	FragTrap	c(b);

	std::cout << b.getName() << std::endl;
	std::cout << c.getName() << std::endl;
	return (0);
}