
#include "Zombie.hpp"

Zombie::Zombie() 
{
    std::cout << std::endl << "-> Zombie created" << std::endl;
};

Zombie::~Zombie(void)
{
    std::cout << "-> Zombie destroyed" << std::endl << std::endl;
};

void Zombie::setName(std::string name)
{
    this->name = name;
};
	
void Zombie::announce(void)
{
    std::cout << name << BRAINZ << std::endl;
};

