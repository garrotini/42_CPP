#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
{
	std::cout << ".CT Default Constructor called!" << std::endl;
	this->name = "CT";
	this->hit = 10;
	this->energy = 10;
	this->damage = 0;
};

ClapTrap::ClapTrap(std::string name) 
{
	std::cout << ".CT Parameterized Constructor called!" << std::endl;
	this->name = name;
	this->hit = 10;
	this->energy = 10;
	this->damage = 0;
};

ClapTrap::ClapTrap(const ClapTrap &src)
{
		
	std::cout << ".CT Making a clone of " << src.name << " via CT copy constructor" << std::endl;
	name = src.name;
	hit = src.hit;
	energy = src.energy;
	damage = src.damage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	if (this != &src)
	{
		this->name = src.name;
		this->hit = src.hit;
		this->energy = src.energy;
		this->damage = src.damage;
		std::cout << ".CT Making a clone of " << src.name << " via CT copy assignment operator" << std::endl;
	}
	return *this;
}

ClapTrap::~ClapTrap() { std::cout << ".CT Destructor called!" << std::endl; };


void ClapTrap::attack(const std::string& target)
{
	if (energy > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
		this->energy--;
	}
	else
		std::cout << "No energy left to attack!" << std::endl;
};

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit <= 0)
	{
		std::cout << "ClapTrap " << this->name << " has died!" << std::endl;
		return ;
	}
	if (this->hit > 0)
	{
		std::cout << "ClapTrap " << this->name << " got attacked and lost " << amount << " hit points!" << std::endl;
		this->hit -= amount;
	}
	if (this->hit <= 0)
		std::cout << "ClapTrap " << this->name << " has died!" << std::endl;
};

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy > 0)
	{
		this->hit += amount;
		this->energy -= 1;
		std::cout << "ClapTrap " << this->name << " got a refill of health of " << amount << " points!" << std::endl;
	}
	else 
		std::cout << "No energy left to refill!" << std::endl;
};
