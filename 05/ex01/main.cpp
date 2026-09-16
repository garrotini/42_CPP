#include "Bureaucrat.hpp"

int main()
{
	// regular tests
	
	std::cout << std::endl << "-- REGULAR TESTS --" << std::endl << std::endl;

	try
	{
		Bureaucrat a("A", 5);
		Form one("formz",false,10,10);
		std::cout << a << std::endl;
		std::cout << one << std::endl;
		a.signForm(one);
		std::cout << one << std::endl;
		a.decrementGrade();
		std::cout << a << std::endl;
		a.signForm(one);
		std::cout << a << std::endl;
	}
	
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat a("AA", 5);
		Form one("formx",false,1,1);
		std::cout << a << std::endl;
		a.signForm(one);
		std::cout << a << std::endl;
		a.incrementGrade();
		a.incrementGrade();
		a.incrementGrade();
		a.signForm(one);
		a.incrementGrade();
		std::cout << a << std::endl;
		a.signForm(one);
		std::cout << a << std::endl;
	}
	
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat a("AAA", 150);
		Form one;
		std::cout << a << std::endl;
		std::cout << one << std::endl;
		a.signForm(one);
		std::cout << one << std::endl;
	}
	
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}
	
	std::cout << std::endl << "-- WRONG INIT TESTS --" << std::endl << std::endl;

	try
	{
		Bureaucrat a("AAA", 150);
		Form one("formx",false,2,0);
		std::cout << a << std::endl;
		std::cout << one << std::endl;
		a.signForm(one);
		std::cout << one << std::endl;
	}
	
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat a("AAA", 150);
		Form one("formx",false,151,150);
		std::cout << a << std::endl;
		std::cout << one << std::endl;
		a.signForm(one);
		std::cout << one << std::endl;
	}
	
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}
	return 0;
}

