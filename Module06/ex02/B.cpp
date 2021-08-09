#include "B.hpp"

B::B()
{}

B::~B()
{}

B::B(const B& cp)
{
	(void)cp;
}

B&	B::operator=(B& op)
{
	(void)op;
	return *this;
}
