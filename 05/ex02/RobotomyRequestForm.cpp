#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", false, 72,45)
{
	_target = "RRF_default";
	std::cout << ".RRF Default Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", false, 72, 45)
{
	_target = target;
	std::cout << ".RRF Parameterized Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other)
{
	std::cout << ".RRF Copy Constructor" << std::endl;
	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << ".RRF Destructor" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	(void)other;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!getIsSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > getExecGrade())
		throw GradeTooLowException();
	else
	{
		std::cout << "DRILING: trzzzz trzzzz trzzzz... making TOO MUCH NOISE!" << std::endl;
        if (rand() % 2)
            std::cout << getTarget() << " has been robotomized successfully." << std::endl;
        else
            std::cout << getTarget() << " robotomy failed." << std::endl;
    }
}



