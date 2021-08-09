.PHONY = all clean fclean re
NAME = Bureaucrats
CFLAGS = -Wall -Wextra -Werror
SRC = main.cpp \
	Bureaucrat.cpp \
	Form.cpp \
	ShrubberyCreationForm.cpp \
	RobotomyRequestForm.cpp \
	PresidentialPardonForm.cpp \
	Intern.cpp
INC = ShrubberyCreationForm.hpp \
	Bureaucrat.hpp \
	Form.hpp \
	RobotomyRequestForm.hpp \
	PresidentialPardonForm.hpp \
	Intern.hpp
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