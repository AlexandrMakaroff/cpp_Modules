#include "Zombie.hpp"

int	main()
{
	Zombie	*zm;
	int		i;

	i = 9;
	zm = zombieHorde(i, "Jax");
	for (int j = 0; j < i; j++)
		std::cout << zm[j].getName() << std::endl;
	delete [] zm;
	return (0);
}