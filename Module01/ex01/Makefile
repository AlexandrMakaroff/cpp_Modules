.PHONY = all clean fclean re
NAME = zombieHord
CFLAGS = -Wall -Wextra -Werror
SRC = Zombie.cpp ZombieHorde.cpp main.cpp
OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

$(OBJ):%.o:%.cpp Zombie.hpp

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all