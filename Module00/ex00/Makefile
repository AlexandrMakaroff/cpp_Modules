.PHONY = all clean fclean re
NAME = megaphone
CC = clang++
CFLAGS = -Wall -Wextra -Werror
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

$(OBJ):%.o:%.cpp

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all