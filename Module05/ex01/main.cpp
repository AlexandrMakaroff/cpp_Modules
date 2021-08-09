#include "Bureaucrat.hpp"

int	main()
{
	int	grade;
	Bureaucrat	*ber;
	Form		*form;

	std::cin >> grade;
	try
	{
		ber = new Bureaucrat("Stui", grade);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		form = new Form("document", 4, 4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		form->beSigned(ber);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}