#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	std::cout << ".DT Default Constructor called!" << std::endl;
	this->_name = "DTx";
};

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	std::cout << ".DT Parameterized Constructor called!" << std::endl;
	this->_name = name;
};

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ScavTrap(src), FragTrap(src)
{
	std::cout << ".DT Copy constructor crossing: " << src._name << std::endl;
	this->_name = src._name;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &src)
{
	if (this != &src)
	{
		ScavTrap::operator=(src);
		FragTrap::operator=(src);
		this->_name = src._name;
		std::cout << ".DT Copy assignment crossing: " << src._name << std::endl;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() { std::cout << ".DT Destructor called!" << std::endl; }

void DiamondTrap::whoAmI()
{
    std::cout << "I am " << _name << " and my ClapTrap name is "
              << FragTrap::_name << std::endl;
}

void DiamondTrap::takeDamage(unsigned int amount) {	FragTrap::takeDamage(amount); }
void DiamondTrap::beRepaired(unsigned int amount) {	FragTrap::beRepaired(amount); }

std::string DiamondTrap::getName() 	{ return _name; }
int DiamondTrap::getHit() 			{ return FragTrap::getHit(); }
int DiamondTrap::getDamage()  		{ return FragTrap::getDamage(); }
int DiamondTrap::getEnergy()  		{ return ScavTrap::getEnergy(); }


