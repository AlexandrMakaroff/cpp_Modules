#ifndef B_HPP
# define B_HPP

# include "Base.hpp"

class Base;

class B;

class B: public Base
{
	public:
		B();
		virtual ~B();
		B(const B&);
		
		B&	operator=(B&);
};

#endif