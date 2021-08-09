#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria*	_slots[4];
		Character();
	public:
		Character(std::string);
		Character(const Character&);
		virtual ~Character();

		Character&	operator=(const Character&);

		std::string const&	getName() const;

		virtual void		equip(AMateria* m);
		virtual void		unequip(int idx);
		virtual void		use(int idx, ICharacter& target);
};

#endif