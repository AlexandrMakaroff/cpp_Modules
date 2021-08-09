.PHONY = all clean fclean re
NAME = complain
CFLAGS = -Wall -Wextra -Werror
SRC = main.cpp Karen.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

$(OBJ):%.o:%.cpp Karen.hpp

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
