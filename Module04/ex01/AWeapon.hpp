#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
	private:
		AWeapon();
	protected:
		std::string	_name;
		int			_apcost;
		int			_damage;
	public:
		AWeapon(std::string const& name, int apcost, int damage);
		AWeapon(AWeapon&);
		virtual ~AWeapon();

		AWeapon&	operator=(AWeapon&);

		std::string	getName() const;
		int			getAPCost() const;
		int			getDamage() const;

		virtual void attack() const = 0;
};

std::ostream&	operator<<(std::ostream &out, AWeapon& wp);

#endif