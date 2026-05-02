#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./harl <level> \t{ debug | info | warning | error }" << std::endl;
		return 1;
	}

	Harl speak;
	speak.complain(av[1]);

	return 0;
}
