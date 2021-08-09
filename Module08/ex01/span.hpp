#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	private:
		std::vector<int>	_vec;
		unsigned int		_n;
		Span();
	public:
		Span(unsigned int);
		Span(const Span&);
		~Span();

		Span&	operator=(Span&);

		void	addNumber(unsigned int);
		void	addNumber(std::vector<int>::const_iterator, std::vector<int>::const_iterator);
		long	shortestSpan();
		long	longestSpan();

		class outOfRange: public std::exception
		{
			virtual const char* what() const throw();
		};
		class notValidNumberOfNumbers: public std::exception
		{
			virtual const char* what() const throw();
		};
};

#endif