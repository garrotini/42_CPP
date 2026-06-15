#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
{
	std::cout << ".Default Constructor called!" << std::endl;
	this->_name = "x";
	this->_hit = 10;
	this->_energy = 10;
	this->_damage = 0;
};

ClapTrap::ClapTrap(std::string name) 
{
	std::cout << ".Constructor called!" << std::endl;
	this->_name = name;
	this->_hit = 10;
	this->_energy = 10;
	this->_damage = 0;
};

// copy constructor
ClapTrap::ClapTrap(const ClapTrap &ct)
{
	std::cout << ".Making a clone of " << ct._name << " via copy constructor" << std::endl;
	_name = ct._name;
	_hit = ct._hit;
	_energy = ct._energy;
	_damage = ct._damage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ct)
{
	if (this != &ct)
	{
		this->_name = ct._name;
		this->_hit = ct._hit;
		this->_energy = ct._energy;
		this->_damage = ct._damage;
		std::cout << ".Making a clone of " << ct._name << " via copy assignment operator" << std::endl;
	}
	return *this;
}

ClapTrap::~ClapTrap() { std::cout << ".Destructor called!" << std::endl; };

void ClapTrap::attack(const std::string& target)
{
	if (this->_hit <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has died!" << std::endl;
		return ;
	}
	if (_energy > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
		this->_energy--;
	}
	else
		std::cout << "No energy left to attack!" << std::endl;
};

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has died!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " got attacked and lost " << amount << " hit points!" << std::endl;
	this->_hit -= amount;
	if (this->_hit <= 0)
		std::cout << "ClapTrap " << this->_name << " has died!" << std::endl;
};

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has died!" << std::endl;
		return ;
	}
	if (this->_energy > 0)
	{
		this->_hit += amount;
		this->_energy -= 1;
		std::cout << "ClapTrap " << this->_name << " got a refill of health of " << amount << " points!" << std::endl;
	}
	else 
		std::cout << "No energy left to refill!" << std::endl;
};
