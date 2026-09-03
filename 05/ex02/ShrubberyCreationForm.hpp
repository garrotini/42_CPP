#ifndef SHRUBBERYCRATIONFORM_HPP
#define SHRUBBERYCRATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class AForm;

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
		virtual ~ShrubberyCreationForm();
		
		void execute(Bureaucrat const & executor) const;
};

#endif
