SRC = main.cpp PmergeMe.cpp
CC = c++ 
CPPFLAGS = -Wall -Wextra -Werror -O3 -std=c++98
NAME = PmergeMe
RM = rm -fr
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	$(CC) $(CPPFLAGS)  -c $< -o $@

$(NAME) : $(OBJ) PmergeMe.hpp
	$(CC) $(OBJ) -o $@

clean :
	@$(RM) $(OBJ)

fclean : clean
	@$(RM) $(NAME)

re : fclean all