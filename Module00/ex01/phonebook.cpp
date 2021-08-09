#include "phonebook.hpp"

void	add_contact(PhoneBook &contact)
{
	std::string	line;

	contact.setNonEmpty();
	std::cout << "Enter the first_name> ";
	std::getline(std::cin, line);
	contact.setFirstName(line);

	std::cout << "Enter the last_name> ";
	std::getline(std::cin, line);
	contact.setLastName(line);

	std::cout << "Enter the nickname> ";
	std::getline(std::cin, line);
	contact.setNickname(line);

	std::cout << "Enter the login> ";
	std::getline(std::cin, line);
	contact.setLogin(line);

	std::cout << "Enter the postal address> ";
	std::getline(std::cin, line);
	contact.setPostalAddress(line);

	std::cout << "Enter the email address> ";
	std::getline(std::cin, line);
	contact.setEmailAddress(line);

	std::cout << "Enter the phone number> ";
	std::getline(std::cin, line);
	contact.setPhoneNumber(line);

	std::cout << "Enter the birthday date> ";
	std::getline(std::cin, line);
	contact.setBirthdayDate(line);

	std::cout << "Enter the favorite meal> ";
	std::getline(std::cin, line);
	contact.setFavoriteMeal(line);

	std::cout << "Enter the underwear color> ";
	std::getline(std::cin, line);
	contact.setUnderwearColor(line);

	std::cout << "Enter the darkest secret> ";
	std::getline(std::cin, line);
	contact.setDarkestSecret(line);
}

void	PutStrMore(std::string info)
{
	info.resize(9);
	std::cout << info;
	std::cout << '.';
	std::cout << "|";
}

void	PutStrLess(const std::string info)
{
	int	len;
	int	space;

	len = info.length();
	space = 10 - len;
	while (space--)
		std::cout << " ";
	for (int j = 0; j < len; j++)
	{
		std::cout << info[j];
	}
	std::cout << "|";
}

void	PutInfo(const std::string info)
{
	int	len;

	len = info.length();
	if (len > 10)
		PutStrMore(info);
	else
		PutStrLess(info);
}

void	PutIndex(int i)
{
	for (int j = 0; j < 9; j++)
		std::cout << " ";
	std::cout << i + 1;
	std::cout << "|";
}

void	ShowInfo(PhoneBook &contact)
{
	std::cout << "FirstName: " << contact.getFirstName() << std::endl;
	std::cout << "LastName: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Login: " << contact.getLogin() << std::endl;
	std::cout << "PostalAddress: " << contact.getPostalAddress() << std::endl;
	std::cout << "EmailAddress: " << contact.getEmailAddress() << std::endl;
	std::cout << "PhoneNumber: " << contact.getPhoneNumber() << std::endl;
	std::cout << "BirthdayDate: " << contact.getBirthdayDate() << std::endl;
	std::cout << "FavoriteMeal: " << contact.getFavoriteMeal() << std::endl;
	std::cout << "UnderwearColor: " << contact.getUnderwearColor() << std::endl;
	std::cout << "DarkestSecret: " << contact.getDarkestSecret() << std::endl;
}

void	PromptIndex(PhoneBook contacts[8])
{
	int		i;
	std::string	index;

	std::cout << "Select one of the available indexes> ";
	std::getline(std::cin, index);
	if (index.length() != 1)
	{
		std::cout << "There is no such index" << std::endl;
		return ;
	}
	i = atoi(index.c_str());
	if (--i < 0 || i > 7 || contacts[i].getStatus() == 0)
		std::cout << "There is no such index" << std::endl;
	else if (contacts[i].getStatus() == 1)
		ShowInfo(contacts[i]);
}

void	search_contacts(PhoneBook contacts[8])
{
	for (int i = 0; i < 8; i++)
	{
		if (contacts[i].getStatus())
		{
			PutIndex(i);
			PutInfo(contacts[i].getFirstName());
			PutInfo(contacts[i].getLastName());
			PutInfo(contacts[i].getNickname());
			std::cout << std::endl;
		}
	}
	PromptIndex(contacts);
}

int		main()
{
	std::string	cmd;
	PhoneBook	contacts[8];
	int			i;

	i = 0;
	while (true)
	{
		std::cout << "ENTER THE COMMAND> ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD" && i < 8)
			add_contact(contacts[i++]);
		else if (cmd == "SEARCH")
			search_contacts(contacts);
		else if (cmd == "EXIT")
		{
			std::cout << "Good bye!" << std::endl;
			return (0);
		}
		else
			std::cout << "There is no such command, try again" << std::endl;
	}
}