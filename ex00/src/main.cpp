#include "../includes/Zombie.hpp"

Zombie	*newZombie(std::string name);

void	randomChump(std::string name);

int main() {
    //heap creation
    Zombie* roger = newZombie("Roger");
    roger->announce();
    //stack creation
    randomChump("AHAH");
    //heap deleting zombie (stack deletes alone)
    delete roger;
    return 0;
}
