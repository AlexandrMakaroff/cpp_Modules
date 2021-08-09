#include "A.hpp"

A::A()
{}

A::~A()
{}

A::A(const A& cp)
{
	(void)cp;
}

A&	A::operator=(A& op)
{
	(void)op;
	return *this;
}
