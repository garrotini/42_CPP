#include "Base.hpp"

Base::~Base() {}

Base *Base::generate(void)
{
	switch (std::rand() % 3)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return NULL;
}

void Base::identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Pointer: A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Pointer: B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Pointer: C" << std::endl;
	else
		std::cout << "Unknown pointer type" << std::endl;
}

void Base::identify(Base& p)
{
	try 
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "Reference: A" << std::endl;
		return;
	} 
	catch (...) {}

	try 
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "Reference: B" << std::endl;
		return;
	} 
	catch (...) {}

	try 
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "Reference: C" << std::endl;
		return;
	} 
	catch (...) {}

	std::cout << "Unknown reference type" << std::endl;
}
