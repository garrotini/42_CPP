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
		Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed &other);
		Fixed(const int x);
		Fixed(const float x);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		bool 	operator>(Fixed &other) const;
		bool	operator<(Fixed &other) const;
		bool	operator<=(Fixed &other) const;
		bool	operator>=(Fixed &other) const;
		bool	operator==(Fixed &other) const;
		bool	operator!=(Fixed &other) const;
		Fixed	operator+(const Fixed &other);
		Fixed	operator-(const Fixed &other);
		Fixed	operator*(const Fixed &other);
		Fixed	operator/(const Fixed &other);
		Fixed 	operator++(int n);
		Fixed &operator++(void);
		Fixed 	operator--(int n);
		Fixed &operator--(void) ;
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};

#endif
