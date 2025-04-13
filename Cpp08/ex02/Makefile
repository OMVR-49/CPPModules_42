SRC = main.cpp 
CC = c++ 
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = MutantStack
RM = rm -fr
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	$(CC) $(CPPFLAGS)  -c $< -o $@

$(NAME) : $(OBJ) MutantStack.hpp
	$(CC) $(OBJ) -o $@

clean :
	@$(RM) $(OBJ)

fclean : clean
	@$(RM) $(NAME)

re : fclean all