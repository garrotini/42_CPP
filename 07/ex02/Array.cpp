#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _arr(NULL), _len(0) {}

template <typename T>
Array<T>::Array(size_t n) : _arr(new T[n]()), _len(n) {}

template <typename T>
Array<T>::Array(const Array &other) : _arr(NULL), _len(other._len)
{
	if (_len)
		_arr = new T[_len];
	for (size_t i = 0; i < _len; ++i)
		_arr[i] = other._arr[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this == &other)
		return *this;
	if (this->_arr)
		delete[] this->_arr;

	this->_arr = new T[other.size()];

	for (unsigned int i = 0; i < this->_len; i++)
		this->_arr[i] = other._arr[i];
	this->_len = other.size();

	return (*this);
}

template <typename T>
Array<T>::~Array(void) 
{
   if (this->_arr)
   	   delete[] _arr; 
}

template <typename T>
size_t Array<T>::size(void) const { return (_len); }

template <typename T>
T &Array<T>::operator[](size_t i)
{
	if (i >= _len)
		throw (std::out_of_range("Index out of bounds"));
	return (_arr[i]);
}

template <typename T>
const T &Array<T>::operator[](size_t i) const
{
	if (i >= _len)
		throw (std::out_of_range("Index out of bounds"));
	return (_arr[i]);
}


