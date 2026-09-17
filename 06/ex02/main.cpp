#include "Base.hpp"

int main()
{
	std::srand(static_cast<unsigned>( std::time(NULL)));

	std::cout << std::endl << "-- GENERAL KNOWN TESTS --" << std::endl << std::endl;

	std::cout << "A" << std::endl;
	Base* a = new A();
    std::cout << "ID: ";
	Base::identify(a);
    std::cout << "ID: ";
	Base::identify(*a);
    delete a;
	
	std::cout << "B" << std::endl;
	Base* b = new B();
    std::cout << "ID: ";
	Base::identify(b);
    std::cout << "ID: ";
	Base::identify(*b);
    delete b;

	std::cout << "C" << std::endl;
	Base* c = new C();
    std::cout << "ID: ";
	Base::identify(c);
    std::cout << "ID: ";
	Base::identify(*c);
    delete c;

	std::cout << std::endl << "-- 3 RANDOM GENERATION TESTS --" << std::endl << std::endl;

	for (int i = 1; i <= 3; i++)
	{
		Base* p = Base::generate();
		std::cout << "__test " << i << "__" << std::endl;
		std::cout << "ID: ";
		Base::identify(p);
		std::cout << "ID: ";
		Base::identify(*p);
		delete p;
	}
	
	std::cout << std::endl << "-- UNKNOWN TYPE TEST --" << std::endl << std::endl;

	std::cout << "unkwnown" << std::endl;
	Base* unknown = NULL;
    std::cout << "ID: ";
	Base::identify(unknown);
    std::cout << "ID: ";
	Base::identify(*unknown);
    delete unknown;
	return 0;
}

