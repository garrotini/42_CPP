#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <string>

AForm::AForm() : _name("not_a_very_special_AForm"),_is_signed(false),  _sign_grade(150), _exec_grade(150)
{
	std::cout << ".AForm Default Constructor" << std::endl;
}

AForm::AForm(const std::string name, int is_signed, int sign_grade, int exec_grade) : _name(name),_is_signed(is_signed),  _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	std::cout << ".AForm Parameterized Constructor" << std::endl;
}

AForm::AForm(const AForm &other) : _name(other._name), _is_signed(other._is_signed),  _sign_grade(other._sign_grade), _exec_grade(other._exec_grade)
{
	std::cout << ".AForm Copy Constructor" << std::endl;
}

AForm  &AForm::operator=(const AForm &other) 
{
    std::cout << ".AForm Assign Operator called" << std::endl;
    if (this != &other)
		this->_is_signed = other.getIsSigned();
    return *this;
}

AForm::~AForm()
{
	std::cout << ".Destructor" << std::endl;
}

bool AForm::beSigned(Bureaucrat &buro)
{
	if (buro.getGrade() > this->_sign_grade)
		throw AForm::GradeTooLowException();
	setIsSigned(true);
	return true;
}

std::string AForm::getName() const
{
	return _name;
}

int AForm::getSignGrade() const
{
	return _sign_grade;
}

int AForm::getExecGrade() const
{
	return _exec_grade;
}

bool AForm::getIsSigned() const
{
	return _is_signed;
}

void AForm::setIsSigned(bool n)
{
	if (n == true)
		_is_signed = true;
	else
		_is_signed = false;
}

std::string AForm::getTarget() const
{
	return _target;
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return "form needs to be signed before execution.";
}

const char *AForm::GradeTooLowException::what() const throw() 
{
	return "his grade is too low.";
}

const char *AForm::GradeTooHighException::what() const throw() 
{
	return "his grade is too high.";
}

std::ostream &operator<<(std::ostream &out, const AForm &src) 
{
    out << "AForm: " <<  src.getName() << ", signed: " << src.getIsSigned() << ", sign grade: " << src.getSignGrade() << ", exec grade: "
	   << src.getExecGrade() << std::endl;
    return out;
}

