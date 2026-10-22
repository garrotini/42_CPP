#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

#include <stdexcept>
#include <algorithm>
#include <vector>
#include <list>

template <typename T>

int easyfind(T &ct, int n)
{
	typename T::iterator i = std::find(ct.begin(), ct.end(), n);

	if (i == ct.end())
		throw (std::runtime_error("Value not found"));

	return (std::distance(ct.begin(), i));
}

#endif
