#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	std::cout << ".DT Default Constructor called!" << std::endl;
	this->name = "DTx";
};

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	std::cout << ".DT Parameterized Constructor called!" << std::endl;
	this->name = name;
};

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ScavTrap(src), FragTrap(src)
{
	std::cout << ".DT Copy constructor crossing: " << src.name << std::endl;
	this->name = src.name;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &src)
{
	if (this != &src)
	{
		ScavTrap::operator=(src);
		FragTrap::operator=(src);
		this->name = src.name;
		std::cout << ".DT Copy assignment crossing: " << src.name << std::endl;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() { std::cout << ".DT Destructor called!" << std::endl; }

void DiamondTrap::whoAmI()
{
    std::cout << "I am " << name << " and my ClapTrap name is "
              << FragTrap::name << std::endl;
}

void DiamondTrap::takeDamage(unsigned int amount) {	FragTrap::takeDamage(amount); }
void DiamondTrap::beRepaired(unsigned int amount) {	FragTrap::beRepaired(amount); }

std::string DiamondTrap::getName() 	{ return name; }
int DiamondTrap::getHit() 			{ return FragTrap::getHit(); }
int DiamondTrap::getDamage()  		{ return FragTrap::getDamage(); }
int DiamondTrap::getEnergy()  		{ return ScavTrap::getEnergy(); }


