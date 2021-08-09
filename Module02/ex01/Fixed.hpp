#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					_value;
		static const int	_bits = 8;
	public:
		Fixed();
		Fixed(const int);
		Fixed(const float);
		Fixed(Fixed const&);
		~Fixed();
		Fixed& operator=(Fixed const&);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream& os, const Fixed&);

#endif