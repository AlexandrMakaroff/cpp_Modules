#include <iostream>
#include <fstream>
#include <string>

int	main(int ac, char *av[])
{
	std::string		filename;
	std::string		str;
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	int			pos;

	if (ac != 4)
	{
		std::cout << "wrong number of arguments" << std::endl;
		return (0);
	}
	std::ifstream	file(av[1]);
	if (!file.is_open())
	{
		std::cout << "couldn't open the file" << std::endl;
		return (0);
	}
	file >> str;
	file.close();

	pos = str.find(s1);
	if (pos != -1)
	{
		str.erase(pos, s1.length());
		str.insert(pos, s2);
	}

	filename = av[1];
	filename += ".replace";

	std::ofstream	rep(filename);
	if (!rep.is_open())
	{
		std::cout << "couldn't open the file" << std::endl;
		return (0);
	}
	rep << str;
	rep.close();
	return (0);
}