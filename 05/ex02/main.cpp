#include "Bureaucrat.hpp"

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	srand(time(NULL)); // this seeds a random number generator with the current time

	std::cout << std::endl << "-- Regular ShrubberyCreationForm TESTS --" << std::endl << std::endl;

	try
	{
		Bureaucrat a("Leo", 5);
		ShrubberyCreationForm one;
		std::cout << a;
		std::cout << one;
		a.signForm(one);
		std::cout << one;
		a.executeForm(one);
	}
	
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	std::cout << std::endl << "-- Exc 1 ShrubberyCreationForm TESTS --" << std::endl << std::endl;

	try
	{
		Bureaucrat a("Leo", 145);
		ShrubberyCreationForm one("SCF_one");
		std::cout << a;
		std::cout << one;
		a.signForm(one);
		std::cout << one;
		a.executeForm(one);
	}
	
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	std::cout << std::endl << "-- Exc 2 ShrubberyCreationForm TESTS --" << std::endl << std::endl;

	try
	{
		Bureaucrat a("Leo", 146);
		ShrubberyCreationForm one("SCF_two");
		std::cout << a;
		std::cout << one;
		a.signForm(one);
		std::cout << one;
		a.executeForm(one);
	}
	
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	std::cout << std::endl << "-- RobotomyRequestForm TESTS --" << std::endl << std::endl;

	try
	{
		Bureaucrat a("Leo", 5);
		RobotomyRequestForm one;
		std::cout << a;
		std::cout << one;
		a.signForm(one);
		std::cout << one;
		a.executeForm(one);
	}
	
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	std::cout << std::endl << "-- EXC 1 RobotomyRequestForm TESTS --" << std::endl << std::endl;

	try
	{
		Bureaucrat a("Leo", 46);
		RobotomyRequestForm one;
		std::cout << a;
		std::cout << one;
		a.signForm(one);
		std::cout << one;
		a.executeForm(one);
	}
	
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}


	std::cout << std::endl << "-- EXC 2 RobotomyRequestForm TESTS --" << std::endl << std::endl;

	try
	{
		Bureaucrat a("Leo", 146);
		RobotomyRequestForm one;
		std::cout << a;
		std::cout << one;
		a.signForm(one);
		std::cout << one;
		a.executeForm(one);
	}
	
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	return 0;
}

