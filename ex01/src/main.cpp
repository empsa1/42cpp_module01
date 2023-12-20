#include "../includes/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	int	size = 15;
	Zombie *horde = zombieHorde(size, "Roger");
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete [] horde;
}