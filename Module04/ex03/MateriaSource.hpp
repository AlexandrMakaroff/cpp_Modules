#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

class	MateriaSource: public IMateriaSource
{
	private:
		AMateria*	_m[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource&);
		virtual ~MateriaSource();

		MateriaSource&		operator=(const MateriaSource&);

		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const& type);
};

#endif