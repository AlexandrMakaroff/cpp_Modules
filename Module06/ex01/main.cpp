#include "Data.hpp"

static std::string	random_string()
{
	std::srand(time(NULL));
	std::string	result;
	char		c;

	for (int i = 0; i < 10; i++)
	{
		while (1)
		{
			c = rand() % 127;
			if (std::isprint(c))
				break ;
		}
		result += c;
	}
	return result;
}

static Data*	RandomData()
{
	Data *data = new Data;

	std::srand(time(NULL));
	data->str_1 = random_string();
	data->num = rand() % 1000;
	data->str_2 = random_string();
	return data;
}

int main()
{
	uintptr_t	raw;
	Data		*data;

	raw = serialize(RandomData());
	data = deserialize(raw);
	
	if (data && raw)
	{
		std::cout << "___After Deserialization___" << std::endl;
		std::cout << "string 1:	" << data->str_1 << std::endl;
		std::cout << "number:       	" << data->num << std::endl;
		std::cout << "string 2:	" << data->str_2 << std::endl;
		delete data;
	}
	return 0;
}