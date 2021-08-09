#ifndef  DIAMONDTRAP_HPP
# define  DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap(std::string);
		DiamondTrap(DiamondTrap&);
		~DiamondTrap();

		DiamondTrap& 	operator = (DiamondTrap const&);

		void			whoAmI();
};

std::ostream&	operator<<(std::ostream &out, DiamondTrap& trap);

#endif