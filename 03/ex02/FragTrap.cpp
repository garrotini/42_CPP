#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() 
{
	std::cout << ".FT Default Constructor called!" << std::endl;
	this->_name = "FTx";
	this->_hit = 100;
	this->_energy = 100;
	this->_damage = 30;
};

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << ".FT Parameterized Constructor called!" << std::endl;
	this->_name = name;
	this->_hit = 100;
	this->_energy = 100;
	this->_damage = 30;
};

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	std::cout << ".FT Copy constructor crossing: " << src._name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &src)
{
	if (this != &src)
	{
		ClapTrap::operator=(src);
		std::cout << ".FT Copy assignment crossing: " << src._name << std::endl;
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << ".FT Destructor called!" << std::endl;
}

void FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << _name << " is HIGH FIVING EVERYONE!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (_hit <= 0)
	{
		std::cout << "FragTrap " << this->_name << " has died!" << std::endl;
		return ;
	}
	if (_energy > 0)
	{
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
		this->_energy--;
	}
	else
		std::cout << "No energy left to attack!" << std::endl;
};

