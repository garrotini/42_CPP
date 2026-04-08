

NAME 	= megaphone
SRC	= ./megaphone.cpp
OBJ	= $(SRC:.cpp=.o)
CFLAGS 	= -Wall -Wextra -Werror -std=c++98
CXX	= c++

all: $(OBJ) $(NAME)

$(NAME):
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

.o: 
	$(CXX) $(CFLAGS) -c $< -o $(<:.cpp=.o)

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJ)

re: fclean all

test: re
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone

.PHONY: all fclean clean re test
