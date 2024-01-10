# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ada-mata <ada-mata@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/08 12:39:32 by ada-mata          #+#    #+#              #
#    Updated: 2024/01/09 16:44:57 by ada-mata         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = push_swap

SRC     = ./src/push.c ./src/utils.c ./src/rotate.c ./src/reverse_rotate.c \
          ./src/sort.c ./src/swap.c ./src/operations.c\

LIBFT   = libft/libft.a

OBJ     = $(SRC:.c=.o)

CC      = gcc

RM      = rm -f

CFLAGS  = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) libft/libft.a

$(LIBFT):
		make -C libft

clean:
	make clean -C ./libft
	${RM} $(OBJ)

fclean: clean
	make fclean -C ./libft
	${RM} $(NAME) $(OBJ)

re: fclean all

.PHONY: all clean fclean re

.SILENT:
