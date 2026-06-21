#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain())
{
	std::cout << ".Cat Default Constructor called!" << std::endl;
};

Cat::Cat(const Cat &ct) : Animal(ct)
{
	_brain = new Brain(*ct._brain);
	std::cout << ".Cat Copy Constructor called!" << std::endl;
}

Cat &Cat::operator=(const Cat &ct)
{
	if (this != &ct)
	{
		this->_type = ct._type;
		Brain *new_brain = new Brain (*ct._brain);
		delete _brain;
		_brain = new_brain;
	}
	std::cout << ".Cat Copy Assignment Operator called!" << std::endl;
	return *this;
}

Cat::~Cat() 
{ 
	std::cout << ".Cat Destructor called!" << std::endl; 
	delete _brain;
};

void Cat::makeSound() const
{
	std::cout << "Meow, Meow" << std::endl;
}

Brain* Cat::getBrain()
{
	return _brain;
}


