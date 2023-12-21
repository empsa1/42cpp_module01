#include "../includes/Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {
    std::cout << "Destroying zombie: " << name << std::endl;
}

void Zombie::announce() {
    std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
