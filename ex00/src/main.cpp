#include "../includes/Zombie.hpp"

int main() {
    //heap creation
    Zombie* roger = Zombie::newZombie("Roger");
    roger->announce();
    //stack creation
    Zombie::randomChump("AHAH");
    //heap deleting zombie (stack deletes alone)
    delete roger;
    return 0;
}
