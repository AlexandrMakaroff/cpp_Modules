#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
	public:
		PowerFist();
		PowerFist(PowerFist&);
		virtual ~PowerFist();

		PowerFist&	operator=(PowerFist&);

		void attack() const;
};

std::ostream&	operator<<(std::ostream &out, PowerFist& wp);

#endif