#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	// regular tests
	
	std::cout << std::endl << "-- REGULAR TESTS --" << std::endl << std::endl;

	try
	{
		Bureaucrat a("AA", 5);
		Form one("math",false,10,10);
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
		Form one("science",false,1,1);
		std::cout << a;
		a.signForm(one);
		a.decrementGrade(10);
		std::cout << a << std::endl;
		a.signForm(one);
	}
	
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}
	return 0;
}

