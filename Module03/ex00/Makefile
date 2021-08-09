.PHONY = all clean fclean re
NAME = Trap
CFLAGS = -Wall -Wextra -Werror
SRC = main.cpp ClapTrap.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

$(OBJ):%.o:%.cpp ClapTrap.hpp

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all