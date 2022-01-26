# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/10 18:41:58 by eniglesi          #+#    #+#              #
#    Updated: 2021/09/18 13:19:52 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	ft_printf.c
OBJS = $(SRC:.c=.o)
LIB = ./libft/libft.a
HEADERS = libft.h
NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror 

all: $(NAME)

%.o: %.c
	$(CC) -c $(FLAGS) $< -o $@

$(NAME): $(OBJS) ft_printf.h
	@make -C ./libft
	ar -crs $(NAME) $(OBJS) $(LIB) ./libft/*.o

clean:
	/bin/rm -f $(OBJS)
	@make clean -C ./libft

fclean: clean
	/bin/rm -f $(NAME)
	@make fclean -C ./libft
	
re: fclean all
