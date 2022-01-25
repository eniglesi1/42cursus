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

char	*get_next_line(int fd)
{
	static int	i = 0;
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
		write(1, "\n", 2);
	return (string);
}
