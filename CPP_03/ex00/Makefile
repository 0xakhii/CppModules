NAME = ClapTrap

CXX = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = ClapTrap.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "\033[1;32m Compiled\033[0;m"
	@$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	@rm -rf $(OBJ)
	@echo "\033[1;31m Cleaning...\033[0;m"

fclean : clean 
	@rm -rf $(NAME)
	@echo "\033[1;31m Full Cleaning...\033[0;m"

re : fclean all

.PHONY : clean re all fclean