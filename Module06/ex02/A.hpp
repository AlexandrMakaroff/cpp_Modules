#ifndef A_HPP
# define A_HPP

# include "Base.hpp"

class Base;

class A;

class A: public Base
{
	public:
		A();
		virtual ~A();
		A(const A&);
		
		A&	operator=(A&);
};

#endif