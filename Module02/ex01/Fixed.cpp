#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = value << this->_bits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = (int)(roundf(value * (1 << this->_bits)));
}

Fixed::Fixed(Fixed const& cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = cpy.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const& a)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = a.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

int		Fixed::toInt(void) const
{
	return (int)(this->_value >> this->_bits);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << this->_bits));
}

std::ostream&	operator<<(std::ostream& os, const Fixed& value)
{
	os << value.toFloat();
	return	os;
}