#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	hero_1("Jim");
	ClapTrap	hero_2(hero_1);
	ClapTrap	hero_3;

	hero_3 = hero_1;
	std::cout << hero_1 << std::endl;
	std::cout << hero_3 << std::endl;
	hero_2.setName("Bob");
	hero_3 = hero_2;
	std::cout << hero_3 << std::endl;
	hero_1.attack(hero_2.getName());
	hero_2.takeDamage(15);
	hero_1.beRepaired(10);
	return (0);
}