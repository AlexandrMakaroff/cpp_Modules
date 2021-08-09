#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class	Weapon
{
	private:
		std::string	_type;
	public:
		Weapon();
		Weapon(std::string const &type);
		~Weapon();

		void				setType(const std::string &type);
		const std::string	&getType();
};

#endif