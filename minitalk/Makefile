# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eniglesi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/10 13:08:14 by eniglesi          #+#    #+#              #
#    Updated: 2022/05/10 13:08:17 by eniglesi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_C = 	srcs/cliente.c
SRC_S = 	srcs/servidor.c

OBJ_C = $(SRC_C:.c=.o)
OBJ_S = $(SRC_S:.c=.o)

LIB = ./includes/printf/libftprintf.a

NAME_S = servidor
NAME_C = cliente
FLAGS = -Wall -Wextra -Werror -fsanitize=address -g3

all: $(NAME_S) $(NAME_C)

%.o: %.c
	$(CC) -c $(FLAGS) $< -o $@

$(NAME_S): $(OBJ_S)
	@make -C ./includes/printf
	gcc $(FLAGS) $(OBJ_S) $(LIB) -o $(NAME_S)

$(NAME_C): $(OBJ_C)
	@make -C ./includes/printf
	gcc $(FLAGS) $(OBJ_C) $(LIB) -o $(NAME_C)

clean:
	/bin/rm -f $(OBJ_S) $(OBJ_C)
	@make clean -C ./includes/printf

fclean: clean
	/bin/rm -f $(NAME_C) $(NAME_S)
	@make fclean -C ./includes/printf
	
re: fclean all

