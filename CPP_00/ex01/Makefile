NAME = phonebook

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = phonebook.cpp Contacts.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "\033[1;32m Compiling...\033[0;m"
	@c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	@rm -rf $(NAME)
	@echo "\033[1;31m Cleaning...\033[0;m"

fclean : clean 
	@rm -rf $(NAME)
	@echo "\033[1;31m Full Cleaning...\033[0;m"

re : fclean all

.PHONY : clean re all fclean