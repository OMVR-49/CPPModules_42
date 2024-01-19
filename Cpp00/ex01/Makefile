# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/11 11:33:49 by ojebbari          #+#    #+#              #
#    Updated: 2024/01/19 00:47:35 by ojebbari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = PhoneBook.cpp Contact.cpp main.cpp
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = PhoneBook
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

%.o : %.cpp Contact.hpp PhoneBook.hpp
	@printf "$(CURSIVE)$(GRAY) 	- Making object file $(notdir $@) from source file $(notdir $<) ... $(RESET)\n"
	@$(CC) $(CPPFLAGS)  -c $< -o $@

$(NAME) : $(OBJ) PhoneBook.hpp Contact.hpp
	@printf "$(CURSIVE)$(GREEN)  	- Compiling :$(RESET)\n"
	@printf "$(WHITE)\n"
	@printf "$(RED)			 _____ ____________   _____  _____       __  _______   _______  __  \n"
	@printf "$(RED)			/  __ \| ___ \ ___ \ |  _  ||  _  |     / / |  ___\ \ / /  _  |/  | \n"
	@printf "$(RED)			| /  \/| |_/ / |_/ / | |/' || |/' |    / /  | |__  \ V /| |/| | | | \n"
	@printf "$(RED)			| |    |  __/|  __/  |  /| ||  /| |   / /   |  __| /   \|  /| | | | \n"
	@printf "$(RED)			| \__/\| |   | |     \ |_/ /\ |_/ /  / /    | |___/ /^\ \ |_/ /_| |_\n"
	@printf "$(RED)		 	 \____/\_|   \_|      \___/  \___/  /_/     \____/\/   \/\___/ \___/\n"
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

.PHONY : all clean fclean re