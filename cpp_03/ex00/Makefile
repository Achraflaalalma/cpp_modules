CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror -g
RM = rm -f
HEADERS = ClapTrap.hpp
SRCS = main.cpp ClapTrap.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = ClapTrap

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