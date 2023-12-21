#include "../includes/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}

void deleteZombieHorde(Zombie* horde, int N) {
    for (int i = N - 1; i >= 0; --i) {
        horde[i].~Zombie();
    }
    operator delete[](horde);
}