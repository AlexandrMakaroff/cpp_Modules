#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap: public ClapTrap
{
	public:
		FragTrap(std::string);
		FragTrap(FragTrap&);
		virtual ~FragTrap();

		FragTrap&	operator = (FragTrap const&);

		void		highFivesGuys(void);
};

#endif