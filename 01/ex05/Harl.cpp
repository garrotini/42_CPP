#include "Harl.hpp"

void Harl::complain(std::string level)
{
	std::string levels[] = {"debug", "info", "warning", "error"};
	void (Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if(levels[i] == level)
		{
			(this->*functions[i])();
			return ;
		}
	}
	
	std::cout << "Error: Unknown level: " << level << std::endl;
	std::cout << "Usage: ./harl <level> { debug | info | warning | error }" << std::endl;
}

