
CC = c++
CFLAGS	= -std=c++98  -Wall -Wextra -Werror
RM = rm -rf

SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp MateriaSource.hpp IMateriaSource.hpp
NAME = Interface

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
