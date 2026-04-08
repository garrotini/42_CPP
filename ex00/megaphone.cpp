#include <iostream>
#define MESSAGE "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int main(int ac, char **av)
{
    if (ac == 1)
	std::cout << MESSAGE;

    for (int i = 1; i < ac; i++)
    {
	for (int j = 0; av[i][j]; j++)
	    std::cout << (char)toupper(av[i][j]);
	std::cout << " ";
    }

    std::cout << std::endl;

    return 0;
}
