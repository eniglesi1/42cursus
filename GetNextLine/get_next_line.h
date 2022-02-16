/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:23:08 by eniglesi          #+#    #+#             */
/*   Updated: 2022/01/13 17:23:15 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include <stdio.h>
//# define BUFFER_SIZE 99

char	*get_next_line(int fd);
char	*ft_realloc(char *s1, int i);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#endif
/*while ((fakexplicator(extra) == -1 && baits == BUFFER_SIZE) || baits == -7)
 {
		baits = read(fd, extra, BUFFER_SIZE);
		extra[baits] = 0;
		j = 0;
		if (baits != 0)
		{
			string = ft_realloc(string, baits);
			if (string == NULL || extra[0] == 0)
			{
				free(string);
				return (NULL);
			}
			while (extra[j] != '\n' && j < baits)
			{
				string[aux] = extra[j];
				j++;
				aux++;
			}
		}*/
