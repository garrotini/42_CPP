#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << ".Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	// this->_grade = grade;
	std::cout << ".Parameterized Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
	std::cout << ".Copy Constructor" << std::endl;
}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &other) 
{
    std::cout << ".Bureaucrat Assign Operator called" << std::endl;
    if (this != &other)
        this->_grade = other.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << ".Destructor" << std::endl;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

std::string Bureaucrat::getName() const
{
	return _name;
}

void Bureaucrat::setGrade(int new_grade)
{
	if (new_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (new_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = new_grade;
}

void Bureaucrat::incrementGrade(int i)
{
	if ((this->_grade - i) > 0)
		return (setGrade(this->_grade - i));
	throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade(int i)
{
	if ((this->_grade + i) <= 150)
		return (setGrade(this->_grade + i));
	throw Bureaucrat::GradeTooLowException();
}

const char *Bureaucrat::GradeTooLowException::what() const throw() 
{
	return "Exception: Grade Too Low";
}

const char *Bureaucrat::GradeTooHighException::what() const throw() 
{
	return "Exception: Grade Too High";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src) {
    out << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl;
    return out;
}

