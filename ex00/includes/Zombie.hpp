#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie {
public:
    Zombie(std::string name);
    ~Zombie();
    void announce();

    static Zombie* newZombie(std::string name);
    static void randomChump(std::string name);

private:
    std::string name;
};

#endif