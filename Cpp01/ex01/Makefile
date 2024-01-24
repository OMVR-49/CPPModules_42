# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/19 16:26:30 by ojebbari          #+#    #+#              #
#    Updated: 2024/01/21 08:58:13 by ojebbari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp zombieHorde.cpp Zombie.cpp
CC = c++ 
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Zombie
RM = rm -fr
OBJ = $(SRC:.cpp=.o)

#Colors:

GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[2m
STRIKE		= 	\e[9m
BLUE		=   \e[34m
BLACK		=   \e[30m
RED			=	\e[31m
CYANA		=	\e[36m
WHITE		=	\e[37m
BOLD		=	\e[1m
all : $(NAME)

%.o : %.cpp
	@printf "$(CURSIVE) 	- Making object file $(notdir $@) from source file $(notdir $<) ... $(RESET)\n"
	@$(CC) $(CPPFLAGS)  -c $< -o $@

$(NAME) : $(OBJ) Zombie.hpp
	@printf "$(BOLD)$(GREEN)  	- Compiling :$(RESET)\n"
	@printf "$(WHITE)\n"
	@printf "$(RED)			 _____ ____________   _____  __        __  _______   _______  __   \n"
	@printf "$(RED)			/  __ \| ___ \ ___ \ |  _  |/  |      / / |  ___\ \ / /  _  |/  |  \n"
	@printf "$(RED)			| /  \/| |_/ / |_/ / | |/' | | |     / /  | |__  \ V /| |/' | | |  \n"
	@printf "$(RED)			| |    |  __/|  __/  |  /| | | |    / /   |  __| /   \|  /| | | |  \n"
	@printf "$(RED)			| \__/\| |   | |     \ |_/ /_| |_  / /    | |___/ /^\ \ |_/ /_| |_ \n"
	@printf "$(RED)		 	 \____/\_|   \_|      \___/ \___/ /_/     \____/\/   \/\___/ \___/ \n"
	@printf "$(WHITE)\n"

	@$(CC) $(CPPFLAGS) $(OBJ) -o $@

clean :
	@printf "$(YELLOW)	- Removing object files ... \n"
	@$(RM) $(OBJ)
	@printf "$(STRIKE)$(GRAY)	  - Object files removed.$(RESET)\n"

fclean : clean
	@printf "$(GREEN)	- Removing ./$(NAME) $(RESET)\n"
	@$(RM) $(NAME)
	@printf "$(STRIKE)$(GRAY)	  - Executable removed.$(RESET)\n\n"

re : fclean all
