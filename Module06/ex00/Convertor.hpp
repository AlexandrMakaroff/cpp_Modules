#ifndef CONVERTOR_HPP
# define CONVERTOR_HPP

# include <iostream>
# include <string>

class Convertor
{
private:

public:
	Convertor();
	Convertor(const Convertor&);
	virtual ~Convertor();

	Convertor&	operator=(const Convertor&);

	std::string	toChar(std::string&) const;
	std::string	toInt(std::string&) const;
	std::string	toFloat(std::string&) const;
	std::string	toDouble(std::string&) const;
};


#endif