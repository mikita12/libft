.DEFAULT_GOAL := all

NAME = program

CC = cc
CFLAGS = -Wall -Wextra -Werror

MAIN = main.c
MAIN_OBJ = $(MAIN:.c=.o)

# pliki .c podane w linii poleceń (make ft_a.c ft_b.c)
SRC = $(filter %.c,$(MAKECMDGOALS))
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(MAIN_OBJ) $(OBJ)
	$(CC) $(CFLAGS) $(MAIN_OBJ) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# mówi make’owi: „te .c to nie są targety”
$(SRC):
	@:

clean:
	rm -f $(OBJ) $(MAIN_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
