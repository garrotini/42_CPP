#include "Bureaucrat.hpp"

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <ctime>

int main()
{
	srand(time(NULL)); // this seeds a random number generator with the current time
	
	Intern someRandomIntern;
	AForm* rrf;
	
	std::cout << std::endl << "-- robotomy request --" << std::endl << std::endl;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	if (rrf) 
	{
		Bureaucrat bbb("bbb", 5);
		bbb.signForm(*rrf);
		bbb.executeForm(*rrf);
		delete rrf;
	}
	
	std::cout << std::endl << "-- shrubbery creation --" << std::endl << std::endl;

	AForm* scf;
	scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	if (scf) 
	{
		Bureaucrat bbb("bbb", 5);
		bbb.signForm(*scf);
		bbb.executeForm(*scf);
		delete scf;
	}

	std::cout << std::endl << "-- presidential pardon --" << std::endl << std::endl;

	AForm* ppf;
	ppf = someRandomIntern.makeForm("presidential pardon", "Bender");
	if (ppf) 
	{
		Bureaucrat bbb("bbb", 5);
		bbb.signForm(*ppf);
		bbb.executeForm(*ppf);
		delete ppf;
	}

	std::cout << std::endl << "-- inapropiate demand --" << std::endl << std::endl;

	AForm* idf;
	idf = someRandomIntern.makeForm("inapropiate demand", "Bender");
	if (idf) 
	{
		Bureaucrat bbb("bbb", 5);
		bbb.signForm(*idf);
		bbb.executeForm(*idf);
		delete idf;
	}

	std::cout << std::endl << "-- intern creating all forms, and bureaucrat signing and executing them --" << std::endl << std::endl;

	AForm *shrub = someRandomIntern.makeForm("shrubbery creation", "SCF");
	AForm *robot = someRandomIntern.makeForm("robotomy request", "RRF");
	AForm *presi = someRandomIntern.makeForm("presidential pardon", "PPF");
	
	Bureaucrat rolim("Rolim", 1);
	if(shrub)
	{
		rolim.signForm(*shrub);
		rolim.executeForm(*shrub);
		delete shrub;
	}

	if (robot)
	{
		rolim.signForm(*robot);
		rolim.executeForm(*robot);
		delete robot;
	}
	
	if (presi)
	{
		rolim.signForm(*presi);
		rolim.executeForm(*presi);
		delete presi;
	}

	return 0;
}

