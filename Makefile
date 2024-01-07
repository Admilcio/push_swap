NAME    = push_swap

SRC     = ./src/push.c ./src/utils.c ./src/rotate.c ./src/reverse_rotate.c \
          ./src/sort.c ./src/swap.c

LIBFT   = libft/libft.a

OBJ     = $(SRC:.c=.o)

CC      = gcc

RM      = rm -f

CFLAGS  = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)

clean:
	make clean -C ./libft
	${RM} $(OBJ)

fclean: clean
	make fclean -C ./libft
	${RM} $(NAME) $(OBJ)

re: fclean all

.PHONY: all clean fclean re

.SILENT: