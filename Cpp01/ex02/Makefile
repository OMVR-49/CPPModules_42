# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/21 00:34:19 by ojebbari          #+#    #+#              #
#    Updated: 2024/01/25 23:00:01 by ojebbari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp 
CC = c++ 
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Brain
RM = rm -fr
OBJ = $(SRC:.cpp=.o)

#Colors:

GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m
BLUE		=   \e[34m
BLACK		=   \e[30m
RED			=	\e[31m
CYANA		=	\e[36m
WHITE		=	\e[37m

all : $(NAME)

%.o : %.cpp
	@printf "$(CURSIVE)$(GRAY) 	- Making object file $@ from source file   $< ... $(RESET)\n"
	@$(CC) $(CPPFLAGS)  -c $< -o $@

$(NAME) : $(OBJ)
	@printf "$(CURSIVE)$(GREEN)  	- Compiling :$(RESET)\n"
	@printf "$(WHITE)\n"
	@printf "$(RED)			 _____ ____________   _____  __        __  _______   _______  _____ \n"
	@printf "$(RED)			/  __ \| ___ \ ___ \ |  _  |/  |      / / |  ___\ \ / /  _  |/ __  \ \n"
	@printf "$(RED)			| /  \/| |_/ / |_/ / | |/' | | |     / /  | |__  \ V /| |/' |\`' / /'\n"
	@printf "$(RED)			| |    |  __/|  __/  |  /| | | |    / /   |  __| /   \|  /| |  / /  \n"
	@printf "$(RED)			| \__/\| |   | |     \ |_/ /_| |_  / /    | |___/ /^\ \ |_/ /./ /___\n"
	@printf "$(RED)		 	 \____/\_|   \_|      \___/ \___/ /_/     \____/\/   \/\___/ \_____/\n"
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
