
CC = c++
CFLAGS	= -std=c++98  -Wall -Wextra -Werror
RM = rm -rf

SRC = Account.cpp tests.cpp 
OBJ = $(SRC:.cpp=.o)
HEADERS = Account.hpp
NAME = Banker

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Complination completed!"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "cleaned!"
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
