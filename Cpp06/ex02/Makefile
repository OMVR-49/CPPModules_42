SRC = main.cpp Base.cpp 
CC = c++ 
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Base
RM = rm -fr
OBJ = $(SRC:.cpp=.o)

#Colors:

GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m
BLUE		=	\e[34m
BLACK		=	\e[30m
RED			=	\e[31m
CYANA		=	\e[36m
WHITE		=	\e[37m

all : $(NAME)

%.o : %.cpp Base.hpp
	@printf "$(CURSIVE)$(GRAY) 	- Making object file $@ from source file $< ... $(RESET)\n"
	@$(CC) $(CPPFLAGS)  -c $< -o $@

$(NAME) : $(OBJ) Base.hpp
	@printf "$(CURSIVE)$(GREEN)  	- Compiling :$(RESET)\n"
	@printf "$(RED)			 _____ ____________   _____  _____.   __  _______   _______  _____ \n"
	@printf "$(RED)			/  __ \| ___ \ ___ \ |  _  |/ ___|   / / |  ___\ \ / /  _  ||  _  | \n"
	@printf "$(RED)			| /  \/| |_/ / |_/ / | |/' / /___   / /  | |__  \ V /| |/' || |/' | \n"
	@printf "$(RED)			| |    |  __/|  __/  |  /| | ___ \ / /   |  __| /   \|  /| || |/| | \n"
	@printf "$(RED)			| \__/\| |   | |     \ |_/ / \_/ |/ /    | |___/ /^\ \ |_/ /\ |_/ / \n"
	@printf "$(RED)		 	 \____/\_|   \_|      \___/\_____/ /     \____/\/   \/\___/  \___/  \n"
	@printf "$(WHITE)\n"

	@$(CC) $(CPPFLAGS) $(OBJ) -o $@

clean :
	@printf "$(YELLOW)	- Removing object files ... \n"
	@$(RM) $(OBJ)
	@printf "$(CURSIVE)$(GRAY)	  - Object files removed.$(RESET)\n" 

fclean : clean
	@printf "$(GREEN)	- Removing $(NAME)... $(RESET)\n"
	@$(RM) $(NAME)
	@printf "$(CURSIVE)$(GRAY)	  - Executable removed.$(RESET)\n\n"

re : fclean all