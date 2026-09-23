#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include <exception>

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

// templates must ship their definitions
// instead of having the definitions inside the class,
// a new tpp file was created for that reason
// (that's also why it's included after the class, and not before!)

#include "Array.tpp"


#endif
