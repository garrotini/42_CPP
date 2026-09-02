#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("Default"),_is_signed(0),  _sign_grade(0), _exec_grade(0)
{
	std::cout << ".FORM Default Constructor" << std::endl;
}

Form::Form(const std::string name, int is_signed, int sign_grade, int exec_grade) : _name(name),_is_signed(is_signed),  _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	// this->_grade = this->setGrade(grade);
	// this->_grade = grade;
	// this->incrementGrade(0);

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
	{
		this->_name = other.getName();
		this->_is_signed = other.getIsSigned();
		this->_sign_grade = other.getSignGrade();
		this->_exec_grade = other.getExecGrade();
	}
    return *this;
}

Form::~Form()
{
	std::cout << ".Destructor" << std::endl;
}

bool Form::beSigned(Bureaucrat &buro)
{
	if (buro.getGrade() <= getSignGrade())
	{
		setIsSigned(true);
		return true;
	}
	return false;
}




