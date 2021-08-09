#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	private:
		Enemy();
	protected:
		std::string	_type;
		int			_hp;
	public:
		Enemy(int hp, std::string const&);
		Enemy(Enemy&);
		virtual ~Enemy();

		Enemy&			operator=(Enemy&);

		std::string		getType() const;
		int				getHP() const;

		virtual void	takeDamage(int);
};

#endif