#include "C.hpp"

C::C()
{}

C::~C()
{}

C::C(const C& cp)
{
	(void)cp;
}

C&	C::operator=(C& op)
{
	(void)op;
	return *this;
}
