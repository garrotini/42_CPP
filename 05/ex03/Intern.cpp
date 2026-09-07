#include "Intern.hpp"

Intern::Intern()
{
	std::cout << ".Intern Default Constructor" << std::endl;
}

Intern::Intern(const Intern &other)
{
	std::cout << ".Intern Copy Constructor" << std::endl;
	(void)other;
}

Intern  &Intern::operator=(const Intern &other) 
{
    std::cout << ".Intern Assign Operator called" << std::endl;
	(void)other;
    return *this;
}

Intern::~Intern()
{
	std::cout << ".Intern Destructor" << std::endl;
}

static AForm* makeShrub(const std::string& target)
{
    return new ShrubberyCreationForm(target);
}

static AForm* makeRobot(const std::string& target) {
    return new RobotomyRequestForm(target);
}

static AForm* makePresi(const std::string& target) {
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string newForm, std::string target)
{
	const std::string expectedForms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	AForm *(*makers[3])(const std::string &) = {makeShrub,makeRobot,makePresi};
	const std::string types[3] = {"ShrubberyCreationForm","RobotomyRequestForm","PresidentialPardonForm"};

	for (int i = 0; i < 3; i++) {
        if (newForm == expectedForms[i]) 
		{
            std::cout << "Intern creates " << types[i] << std::endl;
            return makers[i](target);
        }
    }

	std::cout << "Intern Error: form '" << newForm << "' was not founded in the database" << std::endl;
	return NULL;
}



