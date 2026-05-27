#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed 
{
	private:
		int _value;
		static const int _bits = 8;
	public:
		Fixed() ;
		Fixed(const Fixed& other) ;
		Fixed& operator=(const Fixed &other) ;
		Fixed(const int x) ;
		Fixed(const float x) ;
		~Fixed() ;
		int getRawBits(void) const ;
		void setRawBits(int const raw) ;
		float toFloat(void) const ;
		float toInt(void) const ;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fix);

#endif
