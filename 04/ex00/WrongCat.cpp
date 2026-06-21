#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << ".WrongCat Default Constructor called!" << std::endl;
};

WrongCat::WrongCat(const WrongCat &ct) : WrongAnimal(ct)
{
	_type = ct._type;
	std::cout << ".WrongCat Copy Constructor called!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &ct)
{
	if (this != &ct)
	{
		this->_type = ct._type;
	}
	std::cout << ".WrongCat Copy Assignment Operator called!" << std::endl;
	return *this;
}

WrongCat::~WrongCat() { std::cout << ".WrongCat Destructor called!" << std::endl; };

void WrongCat::makeSound() const
{
	std::cout << "Meow, Meow" << std::endl;
}

