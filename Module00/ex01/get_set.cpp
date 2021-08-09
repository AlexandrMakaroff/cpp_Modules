#include "phonebook.hpp"

void	PhoneBook::setFirstName(const std::string &first_name)
{
	this->first_name = first_name;
}
void	PhoneBook::setLastName(const std::string &last_name)
{
	this->last_name = last_name;
}

void	PhoneBook::setNickname(const std::string &nickname)
{
	this->nick_name = nickname;
}

void	PhoneBook::setLogin(const std::string &login)
{
	this->login = login;
}

void	PhoneBook::setPostalAddress(const std::string &postal_address)
{
	this->postal_adress = postal_address;
}

void	PhoneBook::setEmailAddress(const std::string &email_address)
{
	this->email_address = email_address;
}

void	PhoneBook::setPhoneNumber(const std::string &phone_number)
{
	this->phone_number = phone_number;
}

void	PhoneBook::setBirthdayDate(const std::string &birthday_date)
{
	this->birthday_date = birthday_date;
}

void	PhoneBook::setFavoriteMeal(const std::string &favorite_meal)
{
	this->favorite_meal = favorite_meal;
}

void	PhoneBook::setUnderwearColor(const std::string &underwear_color)
{
	this->underwear_color = underwear_color;
}

void	PhoneBook::setDarkestSecret(const std::string &darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

void	PhoneBook::setNonEmpty()
{
	this->is_empty = 1;
}

const std::string	&PhoneBook::getFirstName()
{
	return (this->first_name);
}

const std::string	&PhoneBook::getLastName()
{
	return (this->last_name);
}

const std::string	&PhoneBook::getNickname()
{
	return (this->nick_name);
}

const std::string	&PhoneBook::getLogin()
{
	return (this->login);
}

const std::string	&PhoneBook::getPostalAddress()
{
	return (this->postal_adress);
}

const std::string	&PhoneBook::getEmailAddress()
{
	return (this->email_address);
}

const std::string	&PhoneBook::getPhoneNumber()
{
	return (this->phone_number);
}

const std::string	&PhoneBook::getBirthdayDate()
{
	return (this->birthday_date);
}

const std::string	&PhoneBook::getFavoriteMeal()
{
	return (this->favorite_meal);
}

const std::string	&PhoneBook::getUnderwearColor()
{
	return (this->underwear_color);
}

const std::string	&PhoneBook::getDarkestSecret()
{
	return (this->darkest_secret);
}

int	PhoneBook::getStatus()
{
	return (this->is_empty);
}