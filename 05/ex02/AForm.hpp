#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <exception>

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _is_signed;
		const int _sign_grade;
		const int _exec_grade;
	protected:
		std::string _target;
	public:
		AForm();
		AForm(const std::string name, int is_signed, int sign_grade, int exec_grade);
		AForm(const AForm &other);
	 	AForm  &operator=(const AForm &other);
		~AForm();

		std::string getName() const;
		bool getIsSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;
		void setIsSigned(bool n);

		// virtual void abstract() = 0;
		virtual void execute(Bureaucrat const & executor) const = 0;

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

std::ostream &operator<<(std::ostream &out, const AForm &src);

#endif
