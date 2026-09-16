#include "Bureaucrat.hpp"

int main()
{
	// regular tests
	
	std::cout << std::endl << "-- REGULAR TESTS --" << std::endl << std::endl;

	try
	{
		Bureaucrat a("AA", 5);
		// std::cout << a << std::endl;
		a.decrementGrade();
		std::cout << a << std::endl;
	}
	
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat b("BB", 5);
		// std::cout << b << std::endl;
		b.incrementGrade();
		std::cout << b << std::endl;
	}

	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat d;
		std::cout << d << std::endl;
		d.incrementGrade();
		std::cout << d << std::endl;
	}

	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	// wrong init
	std::cout << std::endl << "-- WRONG INIT TESTS --" << std::endl << std::endl;

	try
	{
		Bureaucrat a1("high",0);
	}

	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat a2("low",151);
	}

	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	// increment and decrement tests
	std::cout << std::endl << "-- INCREMENT/DECREMENT TESTS --" << std::endl << std::endl;
	
	try
	{
		Bureaucrat c("CC", 2);
		// Bureaucrat c("CC", 1);
		c.incrementGrade();
		std::cout << c << std::endl;
	}

	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	
	try
	{
		// Bureaucrat e("EE", 148);
		Bureaucrat e("EE", 149);
		e.decrementGrade();
		// e.decrementGrade();
		std::cout << e << std::endl;
	}

	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	// copy constructor, assignment operator
	std::cout << std::endl << "-- COPY CONSTRUCTOR, ASSIGNMENT OPERATOR TESTS --" << std::endl << std::endl;
	
	Bureaucrat a;
	Bureaucrat clone(a);

	std::cout << "Original a: " << a << std::endl;
	std::cout << "Replica  a: " << clone << std::endl;

	Bureaucrat b("BB", 123);
	Bureaucrat clone_b;
	clone_b = b; // as name is a const string, only grade is copied!
	std::cout << "Original b: " << b << std::endl;
	std::cout << "Replica  b: " << clone_b << std::endl;

	return 0;
}

