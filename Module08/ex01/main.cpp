#include "span.hpp"

int	main()
{
	Span				sp = Span(5000);
	std::vector<int>	vec;

	for (int i = 0; i < 1000; i++)
		vec.push_back(i);
	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(vec.begin(), vec.end());
		// sp.addNumber(9);
		// sp.addNumber(11);
		// sp.addNumber(40);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	Span	spn = sp;
	try
	{
		std::cout << "Longest: " << spn.longestSpan() << std::endl;
		std::cout << "Shortest: " << spn.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}