#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

struct Data
{
	std::string		str_1;
	int				num;
	std::string		str_2;	
};

uintptr_t	serialize(Data *data);
Data		*deserialize(uintptr_t raw);

#endif