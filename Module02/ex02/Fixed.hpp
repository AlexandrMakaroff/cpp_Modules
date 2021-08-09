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

		static Fixed&		min(Fixed&, Fixed&);
		static Fixed&		max(Fixed&, Fixed&);
		static const Fixed&	min(Fixed const&, Fixed const&);
		static const Fixed&	max(Fixed const&, Fixed const&);

		Fixed&	operator = (Fixed const&);

		bool	operator >= (Fixed const& op) const;
		bool	operator <= (Fixed const& op) const;
		bool	operator > (Fixed const& op) const;
		bool	operator < (Fixed const& op) const;
		bool	operator == (Fixed const& op) const;
		bool	operator != (Fixed const& op) const;

		Fixed	operator + (Fixed const& op) const;
		Fixed	operator - (Fixed const& op) const;
		Fixed	operator * (Fixed const& op) const;
		Fixed	operator / (Fixed const& op) const;

		Fixed	operator++ ();
		Fixed	operator++ (int);
		Fixed	operator-- ();
		Fixed	operator-- (int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream& os, const Fixed&);

Fixed&	min(Fixed&, Fixed&);
Fixed&	max(Fixed&, Fixed&);

#endif