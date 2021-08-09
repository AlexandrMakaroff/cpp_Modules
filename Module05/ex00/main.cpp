#include "Bureaucrat.hpp"

int	main()
{
	int	grade;

	std::cin >> grade;
	try
	{
		Bureaucrat	ber("Stui", grade);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}