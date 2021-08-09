#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	return (new Zombie(name));
}

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*zm;

	if (N < 1 || N > 2147483647)
	{
		std::cout << "Not valid number of zombie" << std::endl;
		return (nullptr);
	}
	zm = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zm[i].setName(name);
		zm[i].announce();
	}
	return (zm);
}