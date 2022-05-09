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

SRC = 	ft_atoi.c 		ft_bzero.c 		ft_calloc.c 	ft_isalnum.c 	\
		ft_isalpha.c 	ft_isascii.c 	ft_isdigit.c 	ft_isprint.c 	\
		ft_itoa.c 		ft_memchr.c 	ft_memcmp.c 	ft_memcpy.c 	\
		ft_memmove.c 	ft_memset.c 	ft_putchar_fd.c	ft_putstr_fd.c 	\
		ft_split.c		ft_strchr.c		ft_strdup.c 	ft_striteri.c 	\
		ft_strjoin.c 	ft_strlcat.c 	ft_strlcpy.c 	ft_strlen.c 	\
		ft_strmapi.c 	ft_strncmp.c 	ft_strnstr.c 	ft_strrchr.c 	\
		ft_strtrim.c 	ft_substr.c 	ft_tolower.c 	ft_toupper.c 	\
		ft_putendl_fd.c ft_putnbr_fd.c
OBJS = $(SRC:.c=.o)
HEADERS = libft.h
NAME = libft.a
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
