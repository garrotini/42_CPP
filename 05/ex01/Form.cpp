#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <string>

Form::Form() : _name("not_a_very_special_form"),_is_signed(false),  _sign_grade(150), _exec_grade(150)
{
	std::cout << ".FORM Default Constructor" << std::endl;
}

Form::Form(const std::string name, bool is_signed, int sign_grade, int exec_grade) : _name(name),_is_signed(is_signed),  _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (sign_grade > 150 || exec_grade > 150)
		throw Form::GradeTooLowException();
	if (sign_grade < 1 || exec_grade < 1)
		throw Form::GradeTooHighException();
	std::cout << ".FORM Parameterized Constructor" << std::endl;
}

Form::Form(const Form &other) : _name(other._name), _is_signed(other._is_signed),  _sign_grade(other._sign_grade), _exec_grade(other._exec_grade)
{
	std::cout << ".FORM Copy Constructor" << std::endl;
}

Form  &Form::operator=(const Form &other) 
{
    std::cout << ".FORM Assign Operator called" << std::endl;
    if (this != &other)
		this->_is_signed = other.getIsSigned();
    return *this;
}

Form::~Form()
{
	std::cout << ".Destructor" << std::endl;
}

bool Form::beSigned(Bureaucrat &buro)
{
	if (buro.getGrade() > this->_sign_grade)
		throw Form::GradeTooLowException();
	_is_signed = true;
	return true;
}

std::string Form::getName() const
{
	return _name;
}

int Form::getSignGrade() const
{
	return _sign_grade;
}

int Form::getExecGrade() const
{
	return _exec_grade;
}

bool Form::getIsSigned() const
{
	return _is_signed;
}

const char *Form::GradeTooLowException::what() const throw() 
{
	return "Form stays unsigned after failed sign because: grade too low";
}

const char *Form::GradeTooHighException::what() const throw() 
{
	return "Form stays unsigned after failed sign because: grade too high";
}

std::ostream &operator<<(std::ostream &out, const Form &src) 
{
    out << "form: " <<  src.getName() << ", signed: " << src.getIsSigned() << ", sign grade: " << src.getSignGrade() << ", exec grade: "
	   << src.getExecGrade();
    return out;
}

