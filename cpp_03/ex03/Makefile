CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -f
HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = DiamondTrap

all: $(NAME)

$(NAME): $(OBJS)
	@echo "compiled!"
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "objects cleaned up!"
	@$(RM) $(OBJS)

fclean: clean
	@echo "all cleaned up!"
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 