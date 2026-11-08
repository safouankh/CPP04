CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Animal.cpp      Cat.cpp         Dog.cpp         Main.cpp
OBG = $(SRC:.cpp=.o)
NAME = Animal

all : $(NAME)

$(NAME): $(OBG)
	$(CC) $(FLAGS) $(OBG) -o $(NAME)

%.o: %.cpp Animal.hpp      Cat.hpp         Dog.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBG)
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean