CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -f
HEADERS = Weapon.hpp HumanA.hpp HumanB.hpp

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = Uviolence

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