#include "easyfind.hpp"

int		main()
{
	std::list<int>		lst;
	std::vector<int>	vec;
	std::deque<int>		deq;

	lst.push_back(4);
	lst.push_back(3);
	lst.push_back(2);
	lst.push_back(1);
	lst.push_back(0);

	vec.push_back(10);
	vec.push_back(11);
	vec.push_back(12);
	vec.push_back(13);
	vec.push_back(14);

	deq.push_back(10);
	deq.push_back(11);
	deq.push_back(12);
	deq.push_back(13);
	deq.push_back(14);
	deq.push_back(15);

	try
	{
		easyfind(lst, 4);
		easyfind(vec, 14);
		easyfind(deq, 14);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}