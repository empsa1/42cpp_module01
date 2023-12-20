#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
private:
    std::string type;

public:
    Weapon(const std::string& str);

    const std::string& getType() const;

    void setType(std::string str);
};

#endif