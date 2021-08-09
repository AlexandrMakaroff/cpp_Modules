.PHONY = all clean fclean re
NAME = templates
CFLAGS = -Wall -Wextra -Werror
SRC = main.cpp
INC = header.hpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(INC)
	clang++ $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all