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
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << ".SCF Destructor" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
		AForm::operator=(other);
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!getIsSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > getExecGrade())
		throw GradeTooLowException();
	else
	{
		std::ofstream output;
        output.open((getTarget() + "_shrubbery").c_str(), std::ofstream::out | std::ofstream::trunc);
        if (!output.is_open())
		{
            std::cerr << "!! Error opening " << getTarget() + "_shrubbery file!" << std::endl;
			throw ErrorOpeningFileException();
        }
        output << TREE << std::endl;
        output.close();
    }
}


const char *ShrubberyCreationForm::ErrorOpeningFileException::what() const throw()
{
	return "! Error Opening File Exception";
}


