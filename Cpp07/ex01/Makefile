SRC = main.cpp 
CC = c++ 
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = iter
RM = rm -fr
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp iter.hpp
	$(CC) $(CPPFLAGS)  -c $< -o $@

$(NAME): $(OBJ) iter.hpp
	$(CC) $(CPPFLAGS) $(OBJ) -o $@

clean :
	@$(RM) $(OBJ)

fclean : clean
	@$(RM) $(NAME)

re : fclean all