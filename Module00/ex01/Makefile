.PHONY = all clean fclean re
NAME = phonebook
CC = clang++
CFLAGS = -Wall -Wextra -Werror
SRC = phonebook.cpp get_set.cpp
OBJ = $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

$(OBJ):%.o:%.cpp phonebook.hpp

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all