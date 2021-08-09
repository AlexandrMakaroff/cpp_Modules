#include "Karen.hpp"

void	debug(Karen& complaint)
{
	std::cout << "[DEBUG]" << std::endl;
	complaint.complain("debug");
	std::cout << "\n" << "[INFO]" << std::endl;
	complaint.complain("info");
	std::cout << "\n" << "[WARNING]" << std::endl;
	complaint.complain("warning");
	std::cout << "\n" << "[ERROR]" << std::endl;
	complaint.complain("error");
}

void	info(Karen& complaint)
{
	std::cout << "[INFO]" << std::endl;
	complaint.complain("info");
	std::cout << "\n" << "[WARNING]" << std::endl;
	complaint.complain("warning");
	std::cout << "\n" << "[ERROR]" << std::endl;
	complaint.complain("error");
}

void	warning(Karen& complaint)
{
	std::cout << "[WARNING]" << std::endl;
	complaint.complain("warning");
	std::cout << "\n" << "[ERROR]" << std::endl;
	complaint.complain("error");
}

void	error(Karen& complaint)
{
	std::cout << "[ERROR]" << std::endl;
	complaint.complain("error");
}

int		main(int ac, char *av[])
{
	Karen		comp;
	Karen		&complaint = comp;
	std::string	level;

	if (ac != 2)
	{
		std::cout << "wrong number of arguments" << std::endl;
		return (-1);
	}
	level = av[1];
	if (level == "DEBUG")
		debug(complaint);
	else if (level == "INFO")
		info(complaint);
	else if (level == "WARNING")
		warning(complaint);
	else if (level == "ERROR")
		error(complaint);
	else
		std::cout << "[Probably complaining about insignificant problems]" << std::endl;
	return (0);
}