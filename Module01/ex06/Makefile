.PHONY = all clean fclean re
NAME = karenFilter
CFLAGS = -Wall -Wextra -Werror
SRC = Karen.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

$(OBJ):%.o:%.cpp Karen.hpp

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all