#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		Character();
	protected:
		std::string	_name;
		int			_ap;
		AWeapon*	_weapon;
	public:
		Character(std::string const&);
		Character(Character&);
		~Character();

		Character&			operator=(Character&);

		std::string		getName() const;
		int				getAP() const;
		AWeapon*		getWeapon() const;

		void			recoverAP();
		void			equip(AWeapon*);
		void			attack(Enemy*);
};

std::ostream&	operator<<(std::ostream& out, Character& hero);

#endif