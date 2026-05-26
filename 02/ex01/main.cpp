#include "Fixed.hpp"

// this function will set a specific behave for << operator!
// otherwise you get compiler errors, because Fixed class would have no conversion to int or float
// toFloat converts the output to 'human-readable' decimal form, therefore, printable
// it must be a FREE function (and not a member), because left operand is 'std::ostream' and not 'Fixed'
// (and you can't add a member to 'ostream')

std::ostream& operator<<(std::ostream &out, const Fixed &fix)
{
	out << fix.toFloat();
	return out;
}
			
int main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;

	// c might be displayed as 42.4219,
	// which is the result of 2 layers of precision loss: float representation of the value and the conversion to a fixed-point
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0;
}


