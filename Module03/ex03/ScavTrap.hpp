#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string);
		ScavTrap(ScavTrap&);
		virtual ~ScavTrap();

		ScavTrap&	operator = (ScavTrap const&);

		void		attack(std::string const& target);
		void		guardGate();
};

#endif