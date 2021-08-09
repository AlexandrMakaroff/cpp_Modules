#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		this->_m[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource& cp)
{
	for(int i = 0; i < 4; i++)
		if (cp._m[i])
			this->_m[i] = cp._m[i]->clone();
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
		if (this->_m[i])
			delete this->_m[i];
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& op)
{
	for(int i = 0; i < 4; i++)
		if (op._m[i])
			this->_m[i] = op._m[i];
	return (*this);
}

void			MateriaSource::learnMateria(AMateria* m)
{
	int	i = 0;
	while (i < 4 && this->_m[i])
		i++;
	if (i < 4)
		this->_m[i] = m;
}

AMateria*		MateriaSource::createMateria(std::string const& type)
{
	for(int i = 0; i < 4; i++)
		if (this->_m[i] && this->_m[i]->getType() == type)
		{
			return (this->_m[i]->clone());
		}
	return (NULL);
}