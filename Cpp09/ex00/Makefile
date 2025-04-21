SRC = main.cpp BitcoinExchange.cpp
CC = c++ 
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = btc
RM = rm -fr
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	$(CC) $(CPPFLAGS)  -c $< -o $@

$(NAME) : $(OBJ) BitcoinExchange.hpp
	$(CC) $(OBJ) -o $@

clean :
	@$(RM) $(OBJ)

fclean : clean
	@$(RM) $(NAME)

re : fclean all