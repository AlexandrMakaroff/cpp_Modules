.PHONY = all clean fclean re
NAME = Bureaucrat
CFLAGS = -Wall -Wextra -Werror
SRC = main.cpp Bureaucrat.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) Bureaucrat.hpp
	clang++ $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	clang++ $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all