#include "Zombie.hpp"


std::string randomName(void)
{
    static const char charset[] = "abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string name;

    for (int i = 0; i < LENGTH; i++)
	name += charset[rand() % 62];
    return name;
}

void randomChump(std::string name)
{
    Zombie *y = newZombie(name);
    y->announce();
    delete y;
}
