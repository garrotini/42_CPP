
NAME 	= app.out
SRC	= Bureaucrat.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp AForm.cpp main.cpp
OBJ	= $(SRC:.cpp=.o)
CFLAGS 	= -Wall -Wextra -Werror -std=c++98
CXX	= c++

all: $(OBJ) $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp 
	$(CXX) $(CFLAGS) -c $< -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJ)

re: fclean all

t: re clean
	./$(NAME)

ffclean: fclean
	rm -f SCF_shrubbery SCF_default_shrubbery

.PHONY: all fclean clean re t
