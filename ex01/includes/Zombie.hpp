#ifndef ZOMBIE_H
#define ZOMBIE_H

# include <iostream>
# include <algorithm>

class	Zombie
{
	private:
		std::string	_name;
	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	setName(std::string name);
};

Zombie	*newZombie(std::string name);

void	randomChump(std::string name);

#endif