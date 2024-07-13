CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror -g
RM = rm -f
HEADERS = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp  WrongAnimal.cpp WrongCat.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = Polymorphism

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