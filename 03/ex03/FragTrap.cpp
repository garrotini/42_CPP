#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() 
{
	std::cout << ".FT Default Constructor called!" << std::endl;
	this->name = "FTx";
	this->hit = 100;
	this->energy = 100;
	this->damage = 30;
};

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << ".FT Parameterized Constructor called!" << std::endl;
	this->name = name;
	this->hit = 100;
	this->energy = 100;
	this->damage = 30;
};

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	std::cout << ".FT Copy constructor crossing:" << src.name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &src)
{
	if (this != &src)
	{
		ClapTrap::operator=(src);
		std::cout << ".FT Copy assignment crossing: " << src.name << std::endl;
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << ".FT Destructor called!" << std::endl;
}

void FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << name << " is HIGH FIVING EVERYONE!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (energy > 0)
	{
		std::cout << "FragTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
		this->energy--;
	}
	else
		std::cout << "No energy left to attack!" << std::endl;
};

