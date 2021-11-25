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
HEADERS = libft.h
NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror 

all: $(NAME)

%.o: %.c
	$(CC) -c $(FLAGS) $< -o $@

$(NAME): $(OBJS) libft.h
	ar -crs $(NAME) $(OBJS)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)
	
re: fclean all
