#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string instanceName, Weapon& weaponType) : name(instanceName), weapon(weaponType) {}

HumanA::~HumanA(void)
{
	std::cout << "HumanA " << this->name << " destroyed" << std::endl;
}

void HumanA::attack() {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}