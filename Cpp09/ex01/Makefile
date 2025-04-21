SRC = main.cpp RPN.cpp
CC = c++ 
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = RPN
RM = rm -fr
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	$(CC) $(CPPFLAGS)  -c $< -o $@

$(NAME) : $(OBJ) RPN.hpp
	$(CC) $(OBJ) -o $@

clean :
	@$(RM) $(OBJ)

fclean : clean
	@$(RM) $(NAME)

re : fclean all