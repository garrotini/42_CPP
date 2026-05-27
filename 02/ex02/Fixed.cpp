#include "Fixed.hpp"

Fixed::Fixed() { this->_value = 0; }; 
Fixed::Fixed(const int x) { this->_value = x << _bits; } ;
Fixed::Fixed(const float x) { this->_value = roundf(x * (1 << _bits)); } ;
Fixed::Fixed(const Fixed& other) { this->_value = other.getRawBits(); };

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->_value = other.getRawBits();
	return *this;
};

Fixed::~Fixed() {} ;

int Fixed::getRawBits(void) const { return _value; };

void Fixed::setRawBits(int const raw) { this->_value = raw; };

int Fixed::toInt(void) const { return (this->_value >> _bits); }

float Fixed::toFloat(void) const 
{ 
	return (static_cast<float>(this->_value) / (1 << this->_bits)); 
};

bool 	Fixed::operator>(Fixed &other) const
{
	return (this->_value > other._value);
}

bool	Fixed::operator<(Fixed &other) const
{
	return (this->_value < other._value);
}

bool	Fixed::operator<=(Fixed &other) const
{
	return (this->_value <= other._value);
}

bool	Fixed::operator>=(Fixed &other) const
{
	return (this->_value >= other._value);
}
bool	Fixed::operator==(Fixed &other) const
{
	return (this->_value == other._value);
}
bool	Fixed::operator!=(Fixed &other) const
{
	return (this->_value != other._value);
}

Fixed	Fixed::operator+(const Fixed &other)
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &other)
{
	return (Fixed(this->toFloat() - other.toFloat()));
}
Fixed	Fixed::operator*(const Fixed &other)
{
	return (Fixed(this->toFloat() * other.toFloat()));
}
Fixed	Fixed::operator/(const Fixed &other)
{
	return (Fixed(this->toFloat() / other.toFloat()));
}
Fixed 	Fixed::operator++(int n)
{
	(void)n;
	Fixed temp = *this;
	this->_value++;
	return(temp);
}
Fixed &Fixed::operator++(void)
{
	this->_value++;
	return(*this);
}
Fixed 	Fixed::operator--(int n)
{
	(void)n;
	Fixed temp = *this;
	this->_value--;
	return(temp);
}
Fixed &Fixed::operator--(void)
{
	this->_value--;
	return(*this);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return(b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	return(a);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return(b);
} 

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	return(a);
} 

std::ostream& operator<<(std::ostream &out, const Fixed &fix)
{
	out << fix.toFloat();
	return out;
}
