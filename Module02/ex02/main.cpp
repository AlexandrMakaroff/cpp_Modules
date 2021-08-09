#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << "\n" << std::endl;

	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << "\n" << std::endl;


	(a > b) ? std::cout << 1 << std::endl : std::cout << 0 << std::endl;
	(a < b) ? std::cout << 1 << std::endl : std::cout << 0 << std::endl;
	(a >= b) ? std::cout << 1 << std::endl : std::cout << 0 << std::endl;
	(a <= b) ? std::cout << 1 << std::endl : std::cout << 0 << std::endl;
	(a == b) ? std::cout << 1 << std::endl : std::cout << 0 << std::endl;
	(a != b) ? std::cout << 1 << std::endl : std::cout << 0 << std::endl;

	std::cout << "\n" << ++a << "	" << b << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << b * Fixed(2.5f) << std::endl;
	std::cout << b / Fixed(2.5f) << std::endl;
	Fixed x(5.85f);
	Fixed y(x + 0.15f);
	std::cout << "\nMIN = " << min(x, y) << " : MAX = "<< max(x, y) << std::endl;

	Fixed h(15);
	Fixed const j(Fixed(5.05f) * Fixed(2));
	std::cout << "MIN = " << Fixed::min(h, j) << " : MAX = "<< Fixed::max(h, j) << std::endl;
	return 0;
}