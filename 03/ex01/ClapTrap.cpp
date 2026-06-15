#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
{
	std::cout << ".CT Default Constructor called!" << std::endl;
	this->_name = "CT";
	this->_hit = 10;
	this->_energy = 10;
	this->_damage = 0;
};

ClapTrap::ClapTrap(std::string name) 
{
	std::cout << ".CT Parameterized Constructor called!" << std::endl;
	this->_name = name;
	this->_hit = 10;
	this->_energy = 10;
	this->_damage = 0;
};

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << ".CT Making a clone of " << src._name << " via CT copy constructor" << std::endl;
	_name = src._name;
	_hit = src._hit;
	_energy = src._energy;
	_damage = src._damage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hit = src._hit;
		this->_energy = src._energy;
		this->_damage = src._damage;
		std::cout << ".CT Making a clone of " << src._name << " via CT copy assignment operator" << std::endl;
	}
	return *this;
}

ClapTrap::~ClapTrap() { std::cout << ".CT Destructor called!" << std::endl; };

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
