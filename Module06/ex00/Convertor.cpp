#include "Convertor.hpp"

Convertor::Convertor()
{}

Convertor::Convertor(const Convertor& cp)
{
	(void)cp;
}

Convertor::~Convertor()
{}

Convertor&	Convertor::operator=(const Convertor& op)
{
	(void)op;
	return *this;
}

std::string	Convertor::toInt(std::string& f) const
{
	int			result;

	try
	{
		if (f.length() == 1 && std::isprint(f[0]) && !std::isdigit(f[0]))
			result = static_cast<int>(f[0]);
		else
			result = static_cast<int>(std::stoi(f));
	}
	catch(...)
	{
		return "Not displayable";
	}
	return std::to_string(result);
}

std::string	Convertor::toChar(std::string& f) const
{
	char		result;
	std::string	ret;

	try
	{
		if (f.length() == 1 && !std::isdigit(f[0]))
			result = static_cast<char>(f[0]);
		else if (std::stoi(f) >= 0 && std::stoi(f) < 128)
			result = static_cast<char>(std::stoi(f));
		else
			return "Not displayable";
	}
	catch(const std::exception& e)
	{
		return "Not displayable";
	}
	ret = result;
	return (std::isprint(result)) ? ret : "Not displayable";
}

std::string	Convertor::toFloat(std::string& f) const
{
	float	result;

	try
	{
		if (f.length() == 1 && std::isprint(f[0]) && !std::isdigit(f[0]))
			result = static_cast<float>(f[0]);
		else
			result = static_cast<float>(std::stof(f));
	}
	catch(const std::exception& e)
	{
		return "Not displayable";
	}
	if (static_cast<int>(result) - result == 0.f && result < 1000000.f)
		return (std::to_string(static_cast<int>(result)) + ".0f");
	return (std::to_string(result) + "f");
}

std::string	Convertor::toDouble(std::string& f) const
{
	double	result;

	try
	{
		if (f.length() == 1 && std::isprint(f[0]) && !std::isdigit(f[0]))
			result = static_cast<double>(f[0]);
		else
			result = static_cast<double>(std::stod(f));
	}
	catch(const std::exception& e)
	{
		return "Not displayable";
	}
	if (static_cast<int>(result) - result == 0.f && result < 1000000.f)
		return (std::to_string(static_cast<int>(result)) + ".0");
	return (std::to_string(result));
}
