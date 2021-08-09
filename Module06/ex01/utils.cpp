#include "Data.hpp"

uintptr_t serialize(Data *data)
{

	char *ptr = new char[43];
	
	std::cout << "___Before Serelization___" << std::endl;
	std::cout << "string 1:	" << data->str_1 << std::endl;
	std::cout << "number:		" << data->num << std::endl;
	std::cout << "string 2:	" << data->str_2 << "\n" << std::endl;
	memcpy(ptr, data, 43);
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}