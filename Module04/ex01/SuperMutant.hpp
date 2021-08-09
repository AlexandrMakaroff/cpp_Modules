#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant: public Enemy
{
	public:
		SuperMutant();
		SuperMutant(SuperMutant&);
		~SuperMutant();

		SuperMutant&	operator=(SuperMutant&);

		virtual void	takeDamage(int);
};

#endif