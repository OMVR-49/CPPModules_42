# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/01 17:11:59 by ojebbari          #+#    #+#              #
#    Updated: 2024/02/01 23:27:27 by ojebbari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Dog.cpp Cat.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
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
BLUE		=	\e[34m
BLACK		=	\e[30m
RED			=	\e[31m
CYANA		=	\e[36m
WHITE		=	\e[37m

all : $(NAME)

%.o : %.cpp Animal.hpp Cat.hpp Dog.hpp Brain.hpp WrongAnimal.hpp WrongCat.hpp
	@printf "$(CURSIVE)$(GRAY) 	- Making object file $@ from source file $< ... $(RESET)\n"
	@$(CC) $(CPPFLAGS)  -c $< -o $@

$(NAME) : $(OBJ) Animal.hpp Cat.hpp Dog.hpp Brain.hpp
	@printf "$(CURSIVE)$(GREEN)  	- Compiling :$(RESET)\n"
	@printf "$(WHITE)\n"
	@printf "$(RED)			 _____ ____________  \n"
	@printf "$(RED)			/  __ \| ___ \ ___ \ \n"
	@printf "$(RED)			| /  \/| |_/ / |_/ / \n"
	@printf "$(RED)			| |    |  __/|  __/  \n"
	@printf "$(RED)			| \__/\| |   | |     \n"
	@printf "$(RED)		 	 \____/\_|   \_|     \n"
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
