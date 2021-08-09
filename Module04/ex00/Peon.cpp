#include "Peon.hpp"

Peon::Peon()
{
}

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon& vic):
	Victim(vic.getName())
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon&	Peon::operator = (Peon& op)
{
	this->_name = op.getName();
	return *this;
}

void		Peon::introduce(void)
{
	std::cout << "I'm " << this->_name << " and I like otters!" << std::endl;
}

void		Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}