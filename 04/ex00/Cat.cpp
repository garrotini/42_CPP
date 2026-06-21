#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << ".Cat Default Constructor called!" << std::endl;
};

Cat::Cat(const Cat &ct) : Animal(ct)
{
	_type = ct._type;
	std::cout << ".Cat Copy Constructor called!" << std::endl;
}

Cat &Cat::operator=(const Cat &ct)
{
	if (this != &ct)
	{
		this->_type = ct._type;
	}
	std::cout << ".Cat Copy Assignment Operator called!" << std::endl;
	return *this;
}

Cat::~Cat() { std::cout << ".Cat Destructor called!" << std::endl; };

void Cat::makeSound() const
{
	std::cout << "Meow, Meow" << std::endl;
}

