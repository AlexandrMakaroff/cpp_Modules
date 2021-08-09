#ifndef TERMINATOR_HPP
# define TERMINATOR_HPP

# include "ISpaceMarine.hpp"

class	AssaultTerminator: public ISpaceMarine
{
	public:
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator&);
		virtual ~AssaultTerminator();

		AssaultTerminator&	operator=(AssaultTerminator&);

		ISpaceMarine*	clone() const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
};

#endif