#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
	std::cout << ".Dog Default Constructor called!" << std::endl;
};

Dog::Dog(const Dog &ct) : Animal(ct)
{
	_brain = new Brain(*ct._brain);
	std::cout << ".Dog Copy Constructor called!" << std::endl;
}

Dog &Dog::operator=(const Dog &ct)
{
	if (this != &ct)
	{
		this->_type = ct._type;
		Brain *new_brain = new Brain (*ct._brain);
		delete _brain;
		_brain = new_brain;
	}
	std::cout << ".Dog Copy Assignment Operator called!" << std::endl;
	return *this;
}

Dog::~Dog() 
{
	std::cout << ".Dog Destructor called!" << std::endl; 
	delete _brain;
};

void Dog::makeSound() const
{
	std::cout << "Woof, Woof" << std::endl;
}

Brain* Dog::getBrain() 
{
	return _brain;
}

