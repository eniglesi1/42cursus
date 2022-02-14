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

SRC = 	get_next_line.c

OBJS = $(SRC:.c=.o)

HEADERS = get_next_line.h

NAME = get_next_line.a

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c
	$(CC) -c $(FLAGS) $< -o $@

$(NAME): $(OBJS) $(HEADERS)
	ar -crs $(NAME) $(OBJS)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)
	
re: fclean all
