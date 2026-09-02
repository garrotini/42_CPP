#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool _is_signed;
		const int _sign_grade;
		const int _exec_grade;
	public:
		Form();
		Form(const std::string name, int is_signed, int sign_grade, int exec_grade);
		Form(const Form &other);
	 	Form  &operator=(const Form &other);
		~Form();

		std::string getName() const;
		bool getIsSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;
		void setIsSigned(bool n);
		void setSignGrade(int new_grade);
		void setExecGrade(int new_grade);

		bool beSigned(Bureaucrat &buro);

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


#endif
