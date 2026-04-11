#include "Zombie.hpp"

#define N 16
#define NAME "zmb"

int main(void)
{
    Zombie *horde = zombieHorde(N, NAME);
    
    // next two lines are for testing purposes!
       for (int i = 0; i < N; i++)
    horde[i].announce();

    delete[] horde;

    return 0;
}
