
NAME 	= fixed
SRC	= main.cpp Fixed.cpp
OBJ	= $(SRC:.cpp=.o)
CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98
CXX	= c++

all: $(OBJ) $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJ)

re: fclean all

test: all
	./fixed

.PHONY: all fclean clean re test
