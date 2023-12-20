#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string instanceName) : name(instanceName), weapon(NULL) {}

HumanB::~HumanB(void)
{
	std::cout << "HumanB " << this->name << " destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon& weaponType) {
    this->weapon = &weaponType;
}

void HumanB::attack() const {
    if (weapon != NULL) {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    } else {
        std::cout << name << " attacks!" << std::endl;
    }
}