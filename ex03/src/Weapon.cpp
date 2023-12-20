#include "../includes/Weapon.hpp"

Weapon::Weapon(const std::string& str) : type(str) {}

const std::string& Weapon::getType() const {
    return type;
}

void	Weapon::setType(std::string str)
{
	this->type = str;
}