.PHONY = all clean fclean re
NAME = base
CFLAGS = -Wall -Wextra -Werror
SRC = main.cpp A.cpp B.cpp C.cpp Base.cpp
INC = A.hpp B.hpp C.hpp Base.hpp
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