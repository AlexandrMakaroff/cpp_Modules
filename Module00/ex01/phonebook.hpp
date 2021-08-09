#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>

class	PhoneBook
{
	public:
		void	setFirstName(const std::string &first_name);
		void	setLastName(const std::string &last_name);
		void	setNickname(const std::string &nickname);
		void	setLogin(const std::string &login);
		void	setPostalAddress(const std::string &postal_address);
		void	setEmailAddress(const std::string &email_address);
		void	setPhoneNumber(const std::string &phone_number);
		void	setBirthdayDate(const std::string &birthday_date);
		void	setFavoriteMeal(const std::string &favorite_meal);
		void	setUnderwearColor(const std::string &underwear_color);
		void	setDarkestSecret(const std::string &darkest_secret);
		void	setNonEmpty();

		const std::string	&getFirstName();
		const std::string	&getLastName();
		const std::string	&getNickname();
		const std::string	&getLogin();
		const std::string	&getPostalAddress();
		const std::string	&getEmailAddress();
		const std::string	&getPhoneNumber();
		const std::string	&getBirthdayDate();
		const std::string	&getFavoriteMeal();
		const std::string	&getUnderwearColor();
		const std::string	&getDarkestSecret();
		int					getStatus();

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	login;
		std::string	postal_adress;
		std::string	email_address;
		std::string	phone_number;
		std::string	birthday_date;
		std::string	favorite_meal;
		std::string	underwear_color;
		std::string	darkest_secret;
		bool		is_empty;
};

#endif