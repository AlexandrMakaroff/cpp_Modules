.PHONY = all clean fclean re
NAME = string
CFLAGS = -Wall -Wextra -Werror
SRC = main.cpp
OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

$(OBJ):%.o:%.cpp

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all