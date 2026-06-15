#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	std::cout << ".DT Default Constructor called!" << std::endl;
	this->name = "DTx";
};

// DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
// {
// 	std::cout << ".ST Parameterized Constructor called!" << std::endl;
// 	this->name = name;
// 	this->hit = 100;
// 	this->energy = 50;
// 	this->damage = 20;
// };
//
// DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src)
// {
// 	std::cout << ".ST Copy constructor crossing:" << src.name << std::endl;
// }
//
// DiamondTrap& DiamondTrap::operator=(const DiamondTrap &src)
// {
// 	if (this != &src)
// 	{
// 		ClapTrap::operator=(src);
// 		std::cout << ".ST Copy assignment crossing: " << src.name << std::endl;
// 	}
// 	return *this;
// }
//
// DiamondTrap::~DiamondTrap()
// {
// 	std::cout << ".ST Destructor called!" << std::endl;
// }
//
// void DiamondTrap::guardGate()
// {
// 	std::cout << "DiamondTrap " << name << " is now in Gate Keeper mode!" << std::endl;
// }
