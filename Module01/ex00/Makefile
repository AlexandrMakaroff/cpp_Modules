.PHONY = all clean fclean re
NAME = Zombie
CFLAGS = -Wall -Wextra -Werror
SRC = newZombie.cpp Zombie.cpp randomChump.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

$(OBJ):%.o:%.cpp Zombie.hpp

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all