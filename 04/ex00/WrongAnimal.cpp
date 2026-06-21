#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() 
{
	std::cout << ".WrongAnimal Default Constructor called!" << std::endl;
};

WrongAnimal::WrongAnimal(std::string type) 
{
	std::cout << ".WrongAnimal Parameterized Constructor called!" << std::endl;
	this->_type = type;
};

WrongAnimal::WrongAnimal(const WrongAnimal &ct)
{
	_type = ct._type;
	std::cout << ".WrongAnimal Copy Constructor called!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ct)
{
	if (this != &ct)
	{
		this->_type = ct._type;
	}
	std::cout << ".WrongAnimal Copy Assignment called!" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal() { std::cout << ".WrongAnimal Destructor called!" << std::endl; };

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal doesn't produce sound!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}
