#include "Bureaucrat.hpp"

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <ctime>

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
		RobotomyRequestForm one("R~F~F");
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

	std::cout << std::endl << "-- another regular RobotomyRequestForm TESTS --" << std::endl << std::endl;

	try
	{
		Bureaucrat a("Leo", 6);
		RobotomyRequestForm one("R~F~F");
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

	std::cout << std::endl << "--  PresidentialPardonForm TESTS --" << std::endl << std::endl;
	
	try
	{
		Bureaucrat a("Leo", 5);
		PresidentialPardonForm one("P~P~F");
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

	std::cout << std::endl << "-- Exc1  PresidentialPardonForm TESTS --" << std::endl << std::endl;
	
	try
	{
		Bureaucrat a("Leo", 6);
		PresidentialPardonForm one("P~P~F");
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

	std::cout << std::endl << "-- Leo filling all the Forms TESTS --" << std::endl << std::endl;
	
	try
	{
		Bureaucrat leo("Leo", 5);
		ShrubberyCreationForm shrub("SCF");
		RobotomyRequestForm robot("RRF");
		PresidentialPardonForm presi("PPF");
		std::cout << leo;
		std::cout << shrub;
		std::cout << robot;
		std::cout << presi;
		leo.signForm(shrub);
		leo.signForm(robot);
		leo.signForm(presi);
		leo.executeForm(shrub);
		leo.executeForm(robot);
		leo.executeForm(presi);
	}
	
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}

	std::cout << std::endl << "-- Leo CLONING all the Forms, and EXECUTING them ALL TESTS --" << std::endl << std::endl;
	
	try
	{
		Bureaucrat leo("Leo", 5);

		ShrubberyCreationForm shrub("SCF");
		ShrubberyCreationForm cloneSCF(shrub);
		ShrubberyCreationForm bakSCF;
		bakSCF = shrub;
		std::cout << shrub;
		std::cout << cloneSCF;
		std::cout << bakSCF;


		RobotomyRequestForm robot("RRF");
		RobotomyRequestForm cloneRRF(robot);
		RobotomyRequestForm bakRRF;
		bakRRF = robot;
		std::cout << robot;
		std::cout << cloneRRF;
		std::cout << bakRRF;

		PresidentialPardonForm presi("PPF");
		PresidentialPardonForm clonePPF(presi);
		PresidentialPardonForm bakPPF;
		bakPPF = presi;
		std::cout << presi;
		std::cout << clonePPF;
		std::cout << bakPPF;

		std::cout << "...signing 3 instances of each form..." << std::endl;

		leo.signForm(shrub);
		leo.signForm(cloneSCF);
		leo.signForm(bakSCF);

		leo.signForm(robot);
		leo.signForm(cloneRRF);
		leo.signForm(bakRRF);

		leo.signForm(presi);
		leo.signForm(clonePPF);
		leo.signForm(bakPPF);

		std::cout << "...executing 3 instances of each form..." << std::endl;

		leo.executeForm(shrub);
		leo.executeForm(cloneSCF);
		leo.executeForm(bakSCF);

		leo.executeForm(robot);
		leo.executeForm(cloneRRF);
		leo.executeForm(bakRRF);

		leo.executeForm(presi);
		leo.executeForm(clonePPF);
		leo.executeForm(bakPPF);
	}
	
	catch (std::exception &e)
	{
		std::cerr << "! " << e.what() << std::endl;
	}
	return 0;
}

