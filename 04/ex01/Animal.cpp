#include "Animal.hpp"

Animal::Animal() 
{
	std::cout << ".Animal Default Constructor called!" << std::endl;
};

Animal::Animal(std::string type) 
{
	std::cout << ".Animal Parameterized Constructor called!" << std::endl;
	this->_type = type;
};

Animal::Animal(const Animal &ct)
{
	_type = ct._type;
	std::cout << ".Animal Copy Constructor called!" << std::endl;
}

Animal &Animal::operator=(const Animal &ct)
{
	if (this != &ct)
	{
		this->_type = ct._type;
	}
	std::cout << ".Animal Copy Assignment called!" << std::endl;
	return *this;
}

Animal::~Animal() { std::cout << ".Animal Destructor called!" << std::endl; };

void Animal::makeSound() const
{
	std::cout << "No sound defined!" << std::endl;
};

std::string Animal::getType() const
{
	return (this->_type);
}
