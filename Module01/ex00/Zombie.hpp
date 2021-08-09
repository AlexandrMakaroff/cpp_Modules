#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie
{
	private:
		std::string	_name;

	public:
		Zombie(const std::string name);
		~Zombie();

		std::string	getName();
		void	setName(std::string name);
		void	announce();
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif