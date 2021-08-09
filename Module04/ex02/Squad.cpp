#include "Squad.hpp"
#include <iostream>

Squad::Squad():
	_count(0), _unit(nullptr)
{
}

Squad::Squad(Squad& cp):
	_count(0), _unit(nullptr)
{
	this->_count = 0;
	for (int i = 0; i < cp.getCount(); i++)
		this->push(cp.getUnit(i)->clone());
}

Squad::~Squad()
{
	if (this->_unit)
	{
		for (int i = 0; i < this->_count; i++)
			delete this->_unit[i];
		delete this->_unit;
	}
}

Squad&	Squad::operator=(Squad& op)
{
	if (this->_unit)
	{
		for (int i = 0; i < this->_count; i++)
			delete this->_unit[i];
		delete this->_unit;
		this->_unit = nullptr;
	}
	this->_count = 0;
	for (int i = 0; i < op.getCount(); i++)
		this->push(op.getUnit(i)->clone());
	return *this;
}

int		Squad::getCount() const
{
	return this->_count;
}

ISpaceMarine*	Squad::getUnit(int n) const
{
	if (!this->_count || n < 0 || n >= this->_count)
		return (nullptr);
	return (this->_unit[n]);
}

int		Squad::push(ISpaceMarine* unit)
{
	if (!unit)
		return (this->_count);
	if (this->_unit)
	{
		for (int i = 0; i < this->_count; i++)
			if (this->_unit[i] == unit)
				return (this->_count);
		ISpaceMarine** tmp = new ISpaceMarine*[this->_count + 1];
		for (int i = 0; i < this->_count; i++)
			tmp[i] = this->_unit[i];
		tmp[this->_count] = unit;
		delete [] this->_unit;
		this->_unit = tmp;
		this->_count++;
	}
	else
	{
		this->_unit = new ISpaceMarine*[1];
		this->_unit[0] = unit;
		this->_count = 1;
	}
	return (this->_count);
}