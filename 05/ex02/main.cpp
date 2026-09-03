#include "Bureaucrat.hpp"

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	// regular tests
	
	std::cout << std::endl << "-- REGULAR TESTS --" << std::endl << std::endl;

	try
	{
		Bureaucrat a("AA", 5);
		ShrubberyCreationForm one;
		std::cout << a;
		std::cout << one;
		a.signForm(one);
		a.executeForm(one);
	}
	
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	return 0;
}

