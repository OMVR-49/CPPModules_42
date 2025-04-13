SRC = main.cpp Span.cpp
CC = c++ 
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Span
RM = rm -fr
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	$(CC) $(CPPFLAGS)  -c $< -o $@

$(NAME) : $(OBJ) Span.hpp
	$(CC) $(OBJ) -o $@

clean :
	@$(RM) $(OBJ)

fclean : clean
	@$(RM) $(NAME)

re : fclean all