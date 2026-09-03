#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &other);
	 	Bureaucrat  &operator=(const Bureaucrat &other);
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const;
		void setGrade(int new_grade);

		void incrementGrade(int i);
		void decrementGrade(int i);

		void signForm(AForm &form);
		void executeForm(AForm &form);

		class GradeTooLowException : public std::exception 
		{
            public:
                virtual const char  *what() const throw(); // throw is not allowed inside function

        };
        class GradeTooHighException : public std::exception 
		{
            public:
                virtual const char  *what() const throw(); // throw is not allowed inside function
        };

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src);

#endif
