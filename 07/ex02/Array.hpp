#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cctype>
#include <string>
#include <cstring>

template <typename T>
class Array
{
	private:
		T *_arr;
		size_t _len;
	public:
		Array();
		Array(size_t n);
		Array(const Array &other);
		Array &operator=(const Array &other);
		~Array();

		size_t size() const;
		
		T &operator[](size_t i);
		const T &operator[](size_t i) const;

};

#include "Array.cpp"


#endif
