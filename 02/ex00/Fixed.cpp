#include "Fixed.hpp"

Fixed::Fixed() 
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
};

// copy constructor
Fixed::Fixed(const Fixed& other) 
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = other.getRawBits();
};

// copy assignment operator
Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_value = other.getRawBits();
	return *this;
};

// destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
};

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}
