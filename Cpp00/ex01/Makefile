CC = c++
FLAGE = -Wall -Wextra -Werror -std=c++98
NAME = PhoneBook
SRC = main.cpp Contact.cpp PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)

%.o : %.cpp
	@$(CC) $(FLAGE) -c $< -o $@

$(NAME) : $(OBJ)
	@$(CC) $(FLAGE) -o $(NAME) $(OBJ)
	@echo "\033[92m░░███╗░░██████╗░██████╗░███████╗\033[0m███╗░░░███╗███████╗██████╗░"
	@echo "\033[92m░████║░░╚════██╗╚════██╗╚════██║\033[0m████╗░████║██╔════╝██╔══██╗"
	@echo "\033[92m██╔██║░░░█████╔╝░█████╔╝░░░░██╔╝\033[0m██╔████╔██║█████╗░░██║░░██║"
	@echo "\033[92m╚═╝██║░░░╚═══██╗░╚═══██╗░░░██╔╝░\033[0m██║╚██╔╝██║██╔══╝░░██║░░██║"
	@echo "\033[92m███████╗██████╔╝██████╔╝░░██╔╝░░\033[0m██║░╚═╝░██║███████╗██████╔╝"
	@echo "\033[92m╚══════╝╚═════╝░╚═════╝░░░╚═╝░░░\033[0m╚═╝░░░░░╚═╝╚══════╝╚═════╝░"
	@echo "\033[92mCREATING .O FILES AND exuctubel of PhoneBook ⌛\033[0m"

all : $(NAME)

clean :
	@rm -f $(OBJ)
	@echo "\033[31m Delete object files🗑\033[31m"
fclean : clean
	@rm -f $(NAME)
	@echo "\033[31m Delete exucted file🗑\033[31m"
re : fclean all

run : re
	@./$(NAME)

.PHONY : all clean fclean re