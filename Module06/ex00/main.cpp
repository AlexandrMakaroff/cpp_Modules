#include "Convertor.hpp"

int	main(int ac, char *av[])
{
	std::string	arg;
	Convertor	convertor;

	if (ac != 2)
	{
		std::cout << "Not valid number of args" << std::endl;
		return (-1);
	}
	arg = av[1];
	std::cout << "char: " << convertor.toChar(arg) << std::endl;
	std::cout << "int: " << convertor.toInt(arg) << std::endl;
	std::cout << "float: " << convertor.toFloat(arg) << std::endl;
	std::cout << "double: " << convertor.toDouble(arg) << std::endl;
	return 0;
}