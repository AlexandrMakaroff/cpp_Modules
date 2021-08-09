#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class	TacticalMarine: public ISpaceMarine
{
	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine&);
		virtual ~TacticalMarine();

		TacticalMarine&	operator=(TacticalMarine&);

		ISpaceMarine*	clone() const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
};

#endif