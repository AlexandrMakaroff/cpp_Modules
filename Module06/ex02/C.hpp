#ifndef C_HPP
# define C_HPP

# include "Base.hpp"

class Base;

class C;

class C: public Base
{
	public:
		C();
		virtual ~C();
		C(const C&);
		
		C&	operator=(C&);
};

#endif