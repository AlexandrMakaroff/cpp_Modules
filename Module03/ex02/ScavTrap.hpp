#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
	public:
		ScavTrap(std::string);
		ScavTrap(ScavTrap&);
		virtual ~ScavTrap();

		ScavTrap&	operator = (ScavTrap const&);

		void		attack(std::string const& target);
		void		guardGate();
};

#endif