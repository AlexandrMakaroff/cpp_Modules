#include "Sorcerer.hpp"

int	main()
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim	jim("Jimmy");
	Peon	joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	jim.getPolymorphed();
	robert.polymorph(joe);
	joe.getPolymorphed();

	return 0;
}