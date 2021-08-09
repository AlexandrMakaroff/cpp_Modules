#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title):
	_name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer& cp):
	_name(cp._name), _title(cp._title)
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is dead!";
	std::cout << " Consequences will never be the same!" << std::endl;
}

void		Sorcerer::setName(std::string name)
{
	this->_name = name;
}

void		Sorcerer::setTitle(std::string title)
{
	this->_name = title;
}

std::string	Sorcerer::getName()
{
	return this->_name;
}

std::string	Sorcerer::getTitle()
{
	return this->_title;
}

Sorcerer&	Sorcerer::operator = (Sorcerer& op)
{
	this->_name = op.getName();
	this->_title = op.getTitle();
	return *this;
}

void		Sorcerer::introduce(void)
{
	std::cout << "I am " << this->_name << ", " << this->_title << ", and I like ponies!" << std::endl;
}

std::ostream&	operator<<(std::ostream &out, Sorcerer& sor)
{
	out << "I am " << sor.getName() << ", " << sor.getTitle() << ", and I like ponies!" << std::endl;
	return out;
}

void		Sorcerer::polymorph(Victim const& vic) const
{
	vic.getPolymorphed();
}