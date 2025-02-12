SRC = main.cpp Array.cpp
CC = c++ 
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = whatever
RM = rm -fr
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp Array.hpp
	@$(CC) $(CPPFLAGS)  -c $< -o $@

$(NAME) : $(OBJ) Array.hpp
	@$(CC) $(CPPFLAGS) $(OBJ) -o $@

clean :
	@$(RM) $(OBJ)

fclean : clean
	@$(RM) $(NAME)

re : fclean all