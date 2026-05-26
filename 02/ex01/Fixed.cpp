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
	this->_value = other._value;
};

// copy assignment operator
Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_value = other._value;
	return *this;
};

// constructor with 'const int' as parameter
Fixed::Fixed(const int x)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = x << _bits;
};

// constructor with 'const int' as parameter
// roundf will round a value to the nearest int, otherwise truncation would happen and it some precision would be lost
// basically x gets multiplied by (1 << 8), which means 256
// this multiplication "converts" the float into the fixed-point domain. (it becames a scaled integer)
// later, by dividing this int by 256, it recovers the somewhat "original value", 
// (which is the closest representable value given the fractional_bits. 8 in this case)
Fixed::Fixed(const float x)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(x * (1 << _bits));
};

// destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits(void) const
{
	return _value;
};

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

// this function reverses the multiplication done by the 'float constructor'
// it grabs the "scaled int" in the fixed-point domain,
// and divides it by the 'scaling factor', 256 in this case (1 << 8)!
// casting with just '(float)' like in regular C programmint might do the same in this programm
// but using 'static_cast<float>' is recommendable and more secure (good habit to acquire!)
// (C-style cast can silently do dangerous things: cast away 'const' or reinterpret pointers.
// https://en.cppreference.com/cpp/language/explicit_cast
float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_value) / (1 << this->_bits));
}

float Fixed::toInt(void) const
{
	return (this->_value >> _bits);
}
