#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class	Squad: public ISquad
{
	private:
		int				_count;
		ISpaceMarine**	_unit;
	public:
		Squad();
		Squad(Squad&);
		virtual ~Squad();

		Squad&	operator=(Squad&);

		int		getCount() const;
		ISpaceMarine*	getUnit(int) const;
		int		push(ISpaceMarine*);
};

#endif