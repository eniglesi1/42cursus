/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:47:14 by eniglesi          #+#    #+#             */
/*   Updated: 2022/01/13 12:47:19 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	fakexplicator(extra)
{
	while (extra != '\n')
	{
		extra++;
		
	}
	return (0);
}
char	*get_next_line(int fd)
{
	char			*string;
	static char		*extra;
	int				i;
	int				j;

	string = NULL;
	while ()i = read(fd, extra, BUFFER_SIZE);
	j = 0;
	while (extra[j] != '\n' && j < i)
	{
		string[j] = extra[j];
		j++;
	}
	if (extra[j] == '\n')
	{
//		write(1, "\n", 1);
		string[j] = '\n';
		if (j == i)
			return (string);
		else if (j < i)
		ft_memove(extra, &extra[j +1], i - j);
		else
			
	}
	return (string);
}

/*	static int	i = 0;
	char		*s;
	char		*string

	read(fd, s[i], 1);
	while(s[i] != '\n')
	{
		;
		i++;
		read(fd, s[i], BUFFER_SIZE);
	}
	if (s[i] == '\n')
		write(1, "\n", 2);*/
