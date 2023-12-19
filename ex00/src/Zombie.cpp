#include "../includes/Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {
    std::cout << "Destroying zombie: " << name << std::endl;
}

void Zombie::announce() {
    std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie(std::string name) {
    return new Zombie(name);
}

void Zombie::randomChump(std::string name) {
    Zombie z = Zombie(name);
    z.announce();
}