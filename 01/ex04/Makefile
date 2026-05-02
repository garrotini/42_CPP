NAME 	= replace
SRC	= create_files.cpp main.cpp 
OBJ	= $(SRC:.cpp=.o)
CFLAGS 	= -Wall -Wextra -Werror -std=c++98
CFLAGS_CREATE 	= -Wall -Wextra -Werror -std=c++98 -DCREATE_TEST=1
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

test: all
	./$(NAME)

items: all
	./replace items item article

praeludium: all
	./replace praeludium Praeludium Prelude

names: all
	./replace names alto viola

dream: all
	./replace dream dream DREAM

setlist: all
	./replace setlist "Johann Sebastian" "* JS"
create:
	$(CXX) $(CFLAGS_CREATE) -c create_files.cpp -o create_files.o
	$(CXX) $(CFLAGS_CREATE) -c main.cpp -o main.o
	$(CXX) $(CFLAGS_CREATE) $(OBJ) -o $(NAME)
	./$(NAME)
	$(MAKE) fclean

ffclean: fclean
	rm -f names names.replace items items.replace praeludium praeludium.replace dream dream.replace setlist setlist.replace

recreate: ffclean create

tutti: recreate items names praeludium dream setlist

.PHONY: all fclean clean re test items praeludium names create dream ffclean recreate
