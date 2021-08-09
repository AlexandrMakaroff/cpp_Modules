#include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base::~Base() {}

Base*	generate(void)
{
	int		random;

	std::srand(time(NULL));
	random = rand() % 3;
	// std::cout << random << std::endl;
	if (random == 0)
		return (new A);
	else if (random == 1)
		return (new B);
	else if (random == 2)
		return (new C);
	else
		return nullptr;
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Casting error" << std::endl;
}

void	identify(Base& p)
{
	Base	type;

	try
	{
		type = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::bad_cast& e)
	{}
	try
	{
		type = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::bad_cast& e)
	{}
	try
	{
		type = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::bad_cast& e)
	{}
}