#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	Bureaucrat				tony("Tony", 5);
	Bureaucrat				jake("Jake", 25);

	PresidentialPardonForm	prezident("Prezident");
	RobotomyRequestForm		robot("Robotomy");

	std::cout << tony << std::endl;
	std::cout << prezident << std::endl;
	try
	{
		prezident.beSigned(tony);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		robot.beSigned(tony);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		robot.execute(jake);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		prezident.execute(tony);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		robot.execute(tony);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}