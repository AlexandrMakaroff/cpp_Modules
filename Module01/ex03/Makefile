.PHONY = all clean fclean re
NAME = weapon
CFLAGS = -Wall -Wextra -Werror
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ = ${SRC:.cpp=.o}

all:	$(NAME)

$(NAME): $(OBJ)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

$(OBJ):%.o:%.cpp Weapon.hpp HumanA.hpp HumanB.hpp
clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all