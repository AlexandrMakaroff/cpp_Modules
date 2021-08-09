#include "Zombie.hpp"

int	main()
{
	Zombie	bob("Bob");
	Zombie	*jim;
	Zombie	*jake;

	jim = new Zombie("Jim");
	jake = newZombie("Jake");
	randomChump("Tony");
	delete jim;
	delete jake;
	return (0);
}