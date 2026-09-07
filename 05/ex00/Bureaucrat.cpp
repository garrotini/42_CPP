#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << ".Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();

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

void Bureaucrat::incrementGrade(int i)
{
	if (i < 0)
	{
		std::cerr << "! Invalid increment value. Grade not changed !" << std::endl;
		return ;
	}

	int n = _grade - i;

	if (n < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade = n;
}

void Bureaucrat::decrementGrade(int i)
{
	if (i < 0)
	{
		std::cerr << "! Invalid decrement value. Grade not changed !" << std::endl;
		return ;
	}

	int n = _grade + i;

	if (n > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = n;
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

