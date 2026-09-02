#include "Bureaucrat.hpp"

int main()
{
	// regular tests
	
	std::cout << std::endl << "-- REGULAR TESTS --" << std::endl << std::endl;

	try
	{
		Bureaucrat a("AA", 5);
		// std::cout << a << std::endl;
		a.setGrade(151);
		std::cout << a;
	}
	
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat b("BB", 5);
		// std::cout << b << std::endl;
		b.setGrade(15);
		std::cout << b;
	}

	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat d;
		std::cout << d;
		d.setGrade(123);
		std::cout << d;
	}

	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}
	// wrong init
	std::cout << std::endl << "-- WRONG INIT TESTS --" << std::endl << std::endl;

	Bureaucrat a1("low",0);
	Bureaucrat a2("high",151);

	// increment and decrement tests
	std::cout << std::endl << "-- INCREMENT/DECREMENT TESTS --" << std::endl << std::endl;
	
	try
	{
		// Bureaucrat c("CC", 2);
		Bureaucrat c("CC", 1);
		c.incrementGrade(1);
		std::cout << c;
	}

	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	
	try
	{
		Bureaucrat e("EE", 148);
		// Bureaucrat e("EE", 149);
		e.decrementGrade(2);
		std::cout << e;
	}

	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	// copy constructor, assignment operator
	std::cout << std::endl << "-- COPY CONSTRUCTOR, ASSIGNMENT OPERATOR TESTS --" << std::endl << std::endl;
	
	Bureaucrat a;
	Bureaucrat clone(a);

	std::cout << "Original a: " << a;
	std::cout << "Replica  a: " << clone;

	Bureaucrat b("BB", 123);
	Bureaucrat clone_b;
	clone_b = b; // as name is a const string, only grade is copied!
	std::cout << "Original b: " << b;
	std::cout << "Replica  b: " << clone_b;

	return 0;
}

