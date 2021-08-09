#include "iter.hpp"

int	main()
{
	int			arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	std::string	string[3] = {"Hello", "My", "Friend"};

	::iter<int>(arr, 10, print);
	::iter<std::string>(string, 3, print);
	return 0;
}