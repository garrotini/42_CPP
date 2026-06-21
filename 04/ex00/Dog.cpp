#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << ".Dog Default Constructor called!" << std::endl;
};

Dog::Dog(const Dog &ct) : Animal(ct)
{
	_type = ct._type;
	std::cout << ".Dog Copy Constructor called!" << std::endl;
}

Dog &Dog::operator=(const Dog &ct)
{
	if (this != &ct)
	{
		this->_type = ct._type;
	}
	std::cout << ".Dog Copy Assignment Operator called!" << std::endl;
	return *this;
}

Dog::~Dog() { std::cout << ".Dog Destructor called!" << std::endl; };

void Dog::makeSound() const
{
	std::cout << "Woof, woof" << std::endl;
}

