#include "Zombie.hpp"

std::string	Zombie::getName()
{
	return (this->_name);
}
void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce()
{
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
}

Zombie::Zombie(const std::string name)
{
	this->_name = name;
	announce();
}

Zombie::~Zombie()
{
	std::cout << this->_name << " is dead" << std::endl;
}