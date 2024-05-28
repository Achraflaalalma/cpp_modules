CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror 
RM = rm -f
HEADERS = 
SRCS = main.cpp replace.cpp dup.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = Sed

all: $(NAME)

$(NAME): $(OBJS)
	@echo "compiled!"
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp 
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "objects cleaned up!"
	@$(RM) $(OBJS)

fclean: clean
	@echo "all cleaned up!"
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re