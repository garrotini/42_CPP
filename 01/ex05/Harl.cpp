#include "Harl.hpp"

Harl::Harl(void)	{ std::cout << "you've entered 42 Lisboa!" << std::endl; }
Harl::~Harl(void)	{ std::cout << "you've left 42 Lisboa!" << std::endl; }

void Harl::debug(void)	{ std::cout << DEBUG	<< std::endl; }
void Harl::info(void)	{ std::cout << INFO		<< std::endl; }
void Harl::warning(void)	{ std::cout << WARNING	<< std::endl; }
void Harl::error(void)	{ std::cout << ERROR	<< std::endl; }

void Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if(levels[i] == level)
		{
			(this->*functions[i])();
			return ;
		}
	}
	
	std::cerr << "Error: Unknown level: " << level << std::endl;
	std::cerr << "Usage: ./harl <level> { DEBUG | INFO | WARNING | ERROR }" << std::endl;
}

