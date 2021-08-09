#include "Character.hpp"

Character::Character(std::string name):
	_name(name)
{
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
}

Character::Character(const Character& cp):
	_name(cp._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_slots[i])
			delete this->_slots[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (cp._slots[i])
			this->_slots[i] = cp._slots[i]->clone();
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_slots[i])
			delete this->_slots[i];
	}
}

Character&			Character::operator=(const Character& op)
{
	this->_name = op.getName();
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
	for (int i = 0; i < 4; i++)
		if (op._slots[i])
			this->_slots[i] = op._slots[i]->clone();
	return (*this);
}

std::string const&	Character::getName() const
{
	return this->_name;
}

void		Character::equip(AMateria* m)
{
	int	i = 0;

	while (i < 4 && this->_slots[i])
	{
		i++;
	}
	if (i == 4)
		return ;
	if (this->_slots[i] != m)
		this->_slots[i] = m;
}

void		Character::unequip(int idx)
{
	if (idx > -1 && idx < 4)
		this->_slots[idx] = NULL;
}

void		Character::use(int idx, ICharacter& target)
{
	if (idx > -1 && idx < 4 && this->_slots[idx])
	{
		this->_slots[idx]->use(target);
	}
}