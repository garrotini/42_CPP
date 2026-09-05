#ifndef SHRUBBERYCRATIONFORM_HPP
#define SHRUBBERYCRATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

#define TREE "\n \
                                              .  \n\
                                   .         ;   \n\
      .              .              ;%     ;;    \n\
        ,           ,                :;%  %;     \n\
         :         ;                   :;%;'     \n\
,.        %;     %;            ;        %;'    , \n\
  ;       ;%;  %%;        ,     %;    ;%;    ,%' \n\
   %;       %;%;      ,  ;       %;  ;%;   ,%;'  \n\
    ;%;      %;        ;%;        % ;%;  ,%;'    \n\
     `%;.     ;%;     %;'         `;%%;.%;'      \n\
      `:;%.    ;%%. %@;        %; ;@%;%'         \n\
         `:%;.  :;bd%;          %;@%;'           \n\
           `@%:.  :;%.         ;@@%;'            \n\
             `@%.  `;@%.      ;@@%;              \n\
               `@%%. `@%%    ;@@%;               \n\
                 ;@%. :@%%  %@@%;                \n\
                   %@bd%%%bd%%:;                 \n\
                     #@%%%%%:;;                  \n\
                     %@@%%%::;                   \n\
                     %@@@%(o);  . '              \n\
                     %@@@o%;:(.,'                \n\
                 `.. %@@@o%::;                   \n\
                    `)@@@o%::;                   \n\
                     %@@(o)::;                   \n\
                    .%@@@@%::;                   \n\
                    ;%@@@@%::;.                  \n\
                   ;%@@@@%%:;;;.                 \n\
               ...;%@@@@@%%:;;;;,...             \n\
                                                 \n\
			  shrubbery ascii tree\n"

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
