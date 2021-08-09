#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int	main()
{
	// PlasmaRifle	*rifle = new PlasmaRifle;
	// PowerFist	*fist = new PowerFist;

	// std::cout << "\n" << rifle << std::endl;
	// std::cout << "name: " << rifle.getName() << std::endl;
	// std::cout << "dmg: " << rifle.getDamage() << std::endl;
	// std::cout << "APcost: " << rifle.getAPCost() << std::endl;
	// rifle.attack();

	// std::cout << "\n" << fist << std::endl;
	// std::cout << "name: " << fist.getName() << std::endl;
	// std::cout << "dmg: " << fist.getDamage() << std::endl;
	// std::cout << "APcost: " << fist.getAPCost() << std::endl;
	// fist.attack();
	// std::cout << std::endl;

	// Enemy		en(100, "enemy");
	// SuperMutant*	mutant = new SuperMutant;
	// RadScorpion*	scorp = new RadScorpion;

	// // std::cout << "HP: " << en.getHP() << std::endl;
	// // std::cout << "Type: " << en.getType() << std::endl;

	// // std::cout << "\n" << "HP: " << mutant.getHP() << std::endl;
	// // std::cout << "Type: " << mutant.getType() << std::endl;

	// // std::cout << "\n" << "HP: " << scorp.getHP() << std::endl;
	// // std::cout << "Type: " << scorp.getType() << std::endl;
	// Character	human("Jake");
	// human.equip(rifle);

	// std::cout << "Human AP:" << human.getAP() << std::endl;
	// std::cout << human.getWeapon() << std::endl;

	// std::cout << "\nEnemy HP: " << mutant->getHP() << std::endl;
	// human.attack(mutant);
	// std::cout << "\nHuman AP:" << human.getAP() << std::endl;
	// std::cout << "Enemy HP: " << mutant->getHP() << std::endl;
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();
	// Enemy* m = new SuperMutant();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	// std::cout << b->getHP() << std::endl;
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	// std::cout << b->getHP() << std::endl;
	std::cout << *me;
	me->attack(b);
	// std::cout << b->getHP() << std::endl;
	std::cout << *me;

	return (0);
}