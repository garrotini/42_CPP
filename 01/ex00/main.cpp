#include "Zombie.hpp"

int main(void)
{
    Zombie *z = newZombie("ExpectedName");
    z->announce();
    delete z;

    srand(time(NULL));
    std::string random_name = randomName();
    randomChump(random_name);

    return 0;
}
