#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle&);
		virtual ~PlasmaRifle();

		PlasmaRifle&	operator=(PlasmaRifle&);

		void attack() const;
};

std::ostream&	operator<<(std::ostream &out, PlasmaRifle& wp);

#endif