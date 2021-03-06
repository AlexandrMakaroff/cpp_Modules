#ifndef ISOACEMARINE_HPP
# define ISOACEMARINE_HPP

class	ISpaceMarine
{
	public:
	virtual	~ISpaceMarine() {}
	virtual	ISpaceMarine* clone() const = 0;
	virtual	void battleCry() const = 0;
	virtual	void rangedAttack() const = 0;
	virtual	void meleeAttack() const = 0;
};

#endif