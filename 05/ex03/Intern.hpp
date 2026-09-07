#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream> 

class Intern
{
	public:
		Intern();
		Intern(const Intern &other);
	 	Intern  &operator=(const Intern &other);
		~Intern();

		AForm *makeForm(std::string newForm, std::string target);
};

#endif
