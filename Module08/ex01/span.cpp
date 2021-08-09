#include "span.hpp"

Span::Span(unsigned int n):
	_n(n)
{
}

Span::Span(const Span & cpy):
	_vec(cpy._vec),
	_n(cpy._n)
{
	// this->_vec.clear();
	// this->_vec = cpy._vec;
}

Span::~Span()
{}

Span&	Span::operator=(Span& cpy)
{
	this->_vec = cpy._vec;
	this->_n = cpy._n;
	return *this;
}

void	Span::addNumber(unsigned int num)
{
	if (this->_vec.size() >= this->_n)
		throw outOfRange();
	this->_vec.push_back(num);
}

void	Span::addNumber(std::vector<int>::const_iterator beg, std::vector<int>::const_iterator end)
{
	if (this->_vec.size() + std::distance(beg, end) >= this->_n)
		throw outOfRange();
	while (beg != end)
	{
		this->_vec.push_back(*beg);
		beg++;
	}
}

long		Span::longestSpan()
{
	std::vector<int>::const_iterator	it_max;
	std::vector<int>::const_iterator	it_min;

	if (this->_vec.size() < 2)
		throw notValidNumberOfNumbers();
	it_max = max_element(this->_vec.begin(), this->_vec.end());
	it_min = min_element(this->_vec.begin(), this->_vec.end());
	return (*it_max - *it_min);
}

long		Span::shortestSpan()
{
	if (this->_vec.size() < 2)
		throw notValidNumberOfNumbers();

	unsigned int	size = this->_vec.size();
	long			shortest = std::abs(this->_vec[1] - this->_vec[0]);
	long			result = 0;

	std::sort(this->_vec.begin(), this->_vec.end());
	for (unsigned int i = 1; i < size; i++)
	{
		if ((result = this->_vec[i] - this->_vec[i - 1]) < shortest)
			shortest = result;
	}
	return (shortest);
}

const char*	Span::outOfRange::what() const throw()
{
	return "exception: not enough space";
}

const char*	Span::notValidNumberOfNumbers::what() const throw()
{
	return "exception: not valid number of numbers";
}