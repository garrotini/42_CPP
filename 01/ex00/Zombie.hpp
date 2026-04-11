#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#define BRAINZ ": BraiiiiiiinnnzzzZ..."
#define LENGTH 16

class Zombie
{
    private:
	std::string name;
    public:
	Zombie(void);
	~Zombie(void);
	void setName(std::string name);
	void announce(void);
};

std::string randomName(void);
void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif
