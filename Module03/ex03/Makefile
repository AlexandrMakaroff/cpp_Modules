.PHONY = all clean fclean re
NAME = Trap
CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow
SRC = main.cpp ClapTrap.cpp Scavtrap.cpp FragTrap.cpp DiamondTrap.cpp
INCLUDES = ClapTrap.hpp Scavtrap.hpp FragTrap.hpp DiamondTrap.hpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

$(OBJ):%.o:%.cpp $(INCLUDES)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all