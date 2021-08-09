#ifndef	EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <list>
# include <vector>
# include <map>
# include <deque>

class notFound: public std::exception
{
	public:
		virtual const char*	what() const throw() {return "exception: not found";};
};

template <typename T>
void	easyfind(T& haystack, int spine)
{
	typename T::const_iterator	it;
	it = std::find(haystack.begin(), haystack.end(), spine);
	if (it == haystack.end())
		throw notFound();
	std::cout << *it << std::endl;
}

#endif