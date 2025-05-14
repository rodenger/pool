CC = gcc
FLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard srcs/*.c)
OBJ = $(SRCS:.c=.o)
NAME = libft.a
INCLUDES = -I includes/

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

.PHONY: all clean fclean re

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f libft.a

re: fclean all
