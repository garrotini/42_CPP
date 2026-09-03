#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", false, 145,137)
{
	_target = "SCF_default";
	std::cout << ".SCF Default Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", false, 145,137)
{
	_target = target;
	std::cout << ".SCF Parameterized Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other)
{
	std::cout << ".SCF Copy Constructor" << std::endl;
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << ".SCF Destructor" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	(void)other;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if ((getIsSigned() == true) && (executor.getGrade() >= getExecGrade()))
	{
		std::cout << executor.getName() << " executed " << getName() << std::endl;

	}
}



