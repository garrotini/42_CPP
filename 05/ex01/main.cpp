#include "Bureaucrat.hpp"

int main()
{
	// regular tests
	
	std::cout << std::endl << "-- REGULAR TESTS --" << std::endl << std::endl;

	try
	{
		Bureaucrat a("AA", 5);
		Form one("formz",false,10,10);
		std::cout << a;
		a.signForm(one);
		a.decrementGrade(10);
		std::cout << a;
		a.signForm(one);
	}
	
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat a("AA", 5);
		Form one("formx",false,1,1);
		std::cout << a;
		a.signForm(one);
		a.decrementGrade(10);
		std::cout << a;
		a.signForm(one);
	}
	
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat a("AA", 5);
		Form one;
		std::cout << a;
		a.signForm(one);
		a.signForm(one);
	}
	
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat a("AA", 150);
		Form one;
		std::cout << a;
		a.signForm(one);
	}
	
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	return 0;
}

