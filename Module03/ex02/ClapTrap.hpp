#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_Hitpoints;
		unsigned int	_Energy_points;
		unsigned int	_Attack_damage;
	public:
		ClapTrap(std::string);
		ClapTrap(ClapTrap&);
		virtual ~ClapTrap();

		void		setName(std::string);
		std::string	getName();

		ClapTrap&	operator = (ClapTrap const&);

		void		attack(std::string const& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

std::ostream&	operator<<(std::ostream &out, ClapTrap& trap);

#endif