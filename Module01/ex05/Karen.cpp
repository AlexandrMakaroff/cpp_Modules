#include "Karen.hpp"

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my  burger. I just love it!";
	std::cout << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra ";
	std::cout << "bacon cost more money. You don’t put enough!";
	std::cout << " If you did I would not have to ask for it!";
	std::cout << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been";
	std::cout << "coming here for years and you just started working here last month.";
	std::cout << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Karen::complain(std::string level)
{
	typedef void	(Karen::*func_ptr)(void);

	int			pos;
	std::string	funcs[4] = {"debug",
							"info",
							"warning",
							"error"};
	func_ptr	complaint[4] = {&Karen::debug,
								&Karen::info,
								&Karen::warning,
								&Karen::error};
	pos = (level == "debug") ? 0 : (level == "info") ? 1 :
			(level == "warning") ? 2 : (level == "error") ? 2:
			-1;
	if (pos > -1)
		(this->*complaint[pos])();
	else
		std::cout << "Wrong level!" << std::endl;
}