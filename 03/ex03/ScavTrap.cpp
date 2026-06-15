#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() 
{
	std::cout << ".ST Default Constructor called!" << std::endl;
	this->_name = "STx";
	this->_hit = 100;
	this->_energy = 50;
	this->_damage = 20;
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << ".ST Parameterized Constructor called!" << std::endl;
	this->_name = name;
	this->_hit = 100;
	this->_energy = 50;
	this->_damage = 20;
};

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	std::cout << ".ST Copy constructor crossing:" << src._name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &src)
{
	if (this != &src)
	{
		ClapTrap::operator=(src);
		std::cout << ".ST Copy assignment crossing: " << src._name << std::endl;
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << ".ST Destructor called!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_hit <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " has died!" << std::endl;
		return ;
	}
	if (_energy > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
		this->_energy--;
	}
	else
		std::cout << "No energy left to attack!" << std::endl;
};

