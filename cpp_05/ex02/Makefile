CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -f
 
HEADERS = Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp
SRCS = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp  RobotomyRequestForm.cpp  PresidentialPardonForm.cpp 
OBJS = $(SRCS:.cpp=.o)
NAME = 28B

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