#include "Zombie.hpp"
#include <sstream>

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *horde = new Zombie[N];

    std::string new_name = name;

    for (int i = 0; i < N; i++)
    {
	std::ostringstream oss;
	oss << i;
	horde[i].setName(name + oss.str());
    }

    return (horde);
};

