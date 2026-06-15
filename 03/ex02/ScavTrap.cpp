#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() 
{
	std::cout << ".ST Default Constructor called!" << std::endl;
	this->name = "STx";
	this->hit = 100;
	this->energy = 50;
	this->damage = 20;
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << ".ST Parameterized Constructor called!" << std::endl;
	this->name = name;
	this->hit = 100;
	this->energy = 50;
	this->damage = 20;
};

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	std::cout << ".ST Copy constructor crossing:" << src.name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &src)
{
	if (this != &src)
	{
		ClapTrap::operator=(src);
		std::cout << ".ST Copy assignment crossing: " << src.name << std::endl;
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << ".ST Destructor called!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gate Keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (energy > 0)
	{
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
		this->energy--;
	}
	else
		std::cout << "No energy left to attack!" << std::endl;
};

