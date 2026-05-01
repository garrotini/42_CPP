
#include "Zombie.hpp"

Zombie::Zombie(std::string n) 
{
    this->name = n;
};

void Zombie::announce(void)
{
    std::cout << name << BRAINZ << std::endl;
};

