#include "Serializer.hpp"

int main()
{
	Data *stuff = new Data;

	stuff->name = "duck";
	stuff->value = 42;

	std::cout << "original stuff name     : " << stuff->name << std::endl;
	std::cout << "original stuff value    : " << stuff->value << std::endl;
	std::cout << "value of stuff          : " << stuff << std::endl;
	std::cout << "address of stuff        : " << &stuff << std::endl;

	std::cout << "...serializing..." << std::endl;
	uintptr_t raw = Serializer::serialize(stuff);
	std::cout << "value of raw            : " << raw << std::endl;
	std::cout << "address of raw          : " << raw << std::endl;

	Data *deserialized = Serializer::deserialize(raw);
	std::cout << "...deserializing..." << std::endl;

	std::cout << "deserialized stuff name : " << deserialized->name << std::endl;
	std::cout << "deserialized stuff value: " << deserialized->value << std::endl;
	std::cout << "value of deserialized   : " << deserialized << std::endl;
	std::cout << "address of deserialized : " << &deserialized << std::endl;
	
	std::cout << "...verification..." << std::endl;
	if (stuff == deserialized)
		std::cout << "SUCCESS! Data integrity has been kept!" << std::endl;
	else
		std::cout << "ERROR! Data has been lost during the process." << std::endl;

	delete stuff;

	return 0;
}
