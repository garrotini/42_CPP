#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <exception>

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
		Form(const std::string name, bool is_signed, int sign_grade, int exec_grade);
		Form(const Form &other);
	 	Form  &operator=(const Form &other);
		~Form();

		std::string getName() const;
		bool getIsSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;

		bool beSigned(Bureaucrat &buro);

		class GradeTooLowException : public std::exception 
		{
            public:
                virtual const char  *what() const throw();

        };
        class GradeTooHighException : public std::exception 
		{
            public:
                virtual const char  *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, const Form &src);

#endif
