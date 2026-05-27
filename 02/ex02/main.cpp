#include "Fixed.hpp"

int main(void)
{
	// FIRST TEST
	std::cout << "--FIRST TEST--\n";

	Fixed a;
	// Fixed q(10);
	// Fixed q = 5;
	Fixed q = 5.123f;
	
	std::cout << "a: " << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << "q: " << q << std::endl;
	std::cout << --q << std::endl;
	std::cout << q << std::endl;
	std::cout << q-- << std::endl;
	std::cout << q << std::endl;

	std::cout << "max: " << Fixed::max(a,q) << std::endl;
	std::cout << "min: " << Fixed::min(a,q) << std::endl;

	// SECOND TEST
	
	std::cout << "\n--SECOND TEST--\n";
	
	Fixed const b(Fixed(5.05f) / Fixed(2));
	// Fixed const b(Fixed(5.05f));
	Fixed const c(Fixed(9) + Fixed(5));
	// Fixed const c(6 + 2);
	
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "max: " << Fixed::max(b,c) << std::endl;
	std::cout << "min: " << Fixed::min(b,c) << std::endl;
	std::cout << "add_f  : " << b.toFloat()+c.toFloat() << std::endl;
	std::cout << "sub_f  : " << b.toFloat()-c.toFloat() << std::endl;
	std::cout << "b_int: " << b.toInt() << std::endl;
	std::cout << "c_int: " << c.toInt() << std::endl;
	std::cout << "add_int: " << b.toInt()+c.toInt() << std::endl;
	std::cout << "sub_int: " << b.toInt()-c.toInt() << std::endl;

	// THIRD TEST
	std::cout << "\n--THIRD TEST--\n";
	
	Fixed d = a + b + c;
	std::cout << "a+b+c: " << a.toFloat()+b.toFloat()+c.toFloat() << std::endl;
	std::cout << "d    : " << d << std::endl;

	Fixed e = (Fixed(c) - Fixed(b) - Fixed(a));
	std::cout << "c-b-a: " << c.toFloat()-b.toFloat()-a.toFloat() << std::endl;
	std::cout << "e    : " << e << std::endl;

	Fixed f = (Fixed(a) * Fixed(b) * Fixed(c));
	std::cout << "a*b*c: " << a.toFloat() * b.toFloat() * c.toFloat() << std::endl;
	std::cout << "f    : " << f << std::endl;

	// FORTH
	std::cout << "\n--FORTH TEST--\n";
	
	const Fixed g = a + b + c;
	std::cout << "a+b+c  : " << a.toFloat()+b.toFloat()+c.toFloat() << std::endl;
	std::cout << "const g: " << d << std::endl;

	return 0;
}
