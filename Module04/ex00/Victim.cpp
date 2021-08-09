#include "Victim.hpp"

Victim::Victim()
{
}

Victim::Victim(std::string name): _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim& vic):
	_name(vic.getName())
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason" << std::endl;
}

Victim&	Victim::operator = (Victim& op)
{
	this->_name = op.getName();
	return *this;
}

std::string	Victim::getName()
{
	return (this->_name);
}

void		Victim::introduce(void)
{
	std::cout << "I'm " << this->_name << " and I like otters!" << std::endl;
}

void		Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream&	operator<<(std::ostream &out, Victim& sor)
{
	out << "I'am " << sor.getName() << " and I like otters!" << std::endl;
	return out;
}