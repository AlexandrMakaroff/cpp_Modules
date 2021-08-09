#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void	iter(T(* array), int len, void (*func)(T const&))
{
	for (int i = 0; i < len; i++)
		func(array[i]);
}

template <typename T>
void	print(T const& out)
{
	std::cout << out << std::endl;
}

#endif