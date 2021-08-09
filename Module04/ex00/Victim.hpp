#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class	Victim
{
protected:
	std::string	_name;
	Victim();
public:
	Victim(std::string);
	Victim(Victim&);
	virtual ~Victim();

	Victim&			operator = (Victim&);

	// void		setName(std::string);
	std::string		getName();

	void			introduce(void);
	virtual void	getPolymorphed() const;
};

std::ostream&	operator<<(std::ostream &out, Victim& sor);

#endif