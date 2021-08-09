.PHONY = all clean fclean re
NAME = convert
CFLAGS = -Wall -Wextra -Werror
SRC = main.cpp Convertor.cpp
INC = Convertor.hpp
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