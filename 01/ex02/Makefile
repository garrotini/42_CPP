
NAME 	= brain
SRC	= main.cpp
OBJ	= $(SRC:.cpp=.o)
CFLAGS 	= -Wall -Wextra -Werror -std=c++98
CXX	= c++

all: $(OBJ) $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Zombie.hpp
	$(CXX) $(CFLAGS) -c $< -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJ)

re: fclean all

test: all
	./$(NAME)

.PHONY: all fclean clean re test
