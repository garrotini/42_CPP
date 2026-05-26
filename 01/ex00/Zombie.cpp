
#include "Zombie.hpp"

Zombie::Zombie(std::string n) 
{
    this->name = n;
};

Zombie::~Zombie()
{
	std::cout << "Zombie destroyed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << BRAINZ << std::endl;
};

