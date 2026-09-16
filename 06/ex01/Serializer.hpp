#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <stdint.h>


struct Data
{
	std::string name;
	int value;
};

class Serializer
{
	private:
		Serializer(void);
		Serializer(const Serializer &copyFrom);
		Serializer &operator=(const Serializer &right);
		~Serializer(void);
	public:
		static uintptr_t serialize(Data* ptr);
		static Data*	deserialize(uintptr_t raw);
};

#endif
