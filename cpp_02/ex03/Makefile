CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror -g
RM = rm -f
HEADERS = Fixed.hpp  Point.hpp
SRCS = main.cpp Fixed.cpp bsp.cpp  Point.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = BSP

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