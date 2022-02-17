/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:47:56 by eniglesi          #+#    #+#             */
/*   Updated: 2022/02/16 21:48:01 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include <stdio.h>

char	*get_next_line(int fd);
char	*ft_realloc(char *s1, int i);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_copynl(char *extra, int baits, char *string, int aux);
int		leer(int fd, char *extra);

#endif
