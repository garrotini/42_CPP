
NAME 	= animal
SRC	= Cat.cpp Dog.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp main.cpp
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

v: re clean
	valgrind ./$(NAME)

.PHONY: all fclean clean re t v
