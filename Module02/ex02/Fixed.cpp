#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
}

Fixed::Fixed(const int value)
{
	this->_value = value << this->_bits;
}

Fixed::Fixed(const float value)
{
	this->_value = (int)(roundf(value * (1 << this->_bits)));
}

Fixed::Fixed(Fixed const& cpy)
{
	this->_value = cpy.getRawBits();
}

Fixed::~Fixed()
{
}

Fixed&	Fixed::operator=(Fixed const& a)
{
	this->_value = a.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
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

bool Fixed::operator >= (Fixed const& op) const
{
	return (this->_value >= op.getRawBits());
}

bool Fixed::operator <= (Fixed const& op) const
{
	return (this->_value <= op.getRawBits());
}

bool Fixed::operator > (Fixed const& op) const
{
	return (this->_value > op.getRawBits());
}

bool Fixed::operator < (Fixed const& op) const
{
	return (this->_value < op.getRawBits());
}

bool Fixed::operator == (Fixed const& op) const
{
	return (this->_value == op.getRawBits());
}

bool Fixed::operator != (Fixed const& op) const
{
	return (this->_value != op.getRawBits());
}

Fixed	Fixed::operator + (Fixed const& op) const
{
	Fixed	ret;
	ret.setRawBits(this->_value + op.getRawBits());
	return (ret);
}

Fixed	Fixed::operator - (Fixed const& op) const
{
	Fixed	ret;
	ret.setRawBits(this->_value - op.getRawBits());
	return (ret);
}

Fixed	Fixed::operator * (Fixed const& op) const
{
	Fixed	ret;
	ret.setRawBits(this->_value * op.getRawBits() >> this->_bits);
	return (ret);
}

Fixed	Fixed::operator / (Fixed const& op) const
{
	Fixed	ret;
	ret.setRawBits((this->_value << this->_bits) / op.getRawBits());
	return (ret);
}

Fixed	Fixed::operator++ ()
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++ (int)
{
	Fixed	prev = *this;
	operator++();
	return prev;
}

Fixed	Fixed::operator-- ()
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator-- (int)
{
	Fixed	prev = *this;
	operator--();
	return prev;
}

Fixed&	min(Fixed& f1, Fixed& f2)
{
	return (f1 <= f2) ? f1 : f2;
}

Fixed&	max(Fixed& f1, Fixed& f2)
{
	return (f1 >= f2) ? f1 : f2;
}

const Fixed&	Fixed::min(Fixed const& f1, Fixed const& f2)
{
	return (f1 <= f2) ? f1 : f2;
}

const Fixed&	Fixed::max(Fixed const& f1, Fixed const& f2)
{
	return (f1 >= f2) ? f1 : f2;
}