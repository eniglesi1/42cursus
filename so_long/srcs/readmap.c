/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:50:41 by eniglesi          #+#    #+#             */
/*   Updated: 2022/02/21 12:50:43 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	lines(char **argv)
{
	int		i;
	int		fd;
	char	*str;

	i = 0;
	fd = open(argv[1], O_RDONLY);
	str = get_next_line(fd);
	while (str)
	{
		i++;
		free(str);
		str = get_next_line(fd);
	}
	close(fd);
	return (i);
}

void	readmap(int fd, char **mapa)
{
	int	i;

	i = 0;
	if (fd != -1)
	{
		while (mapa[i] != NULL)
		{
			i++;
			mapa[i] = get_next_line(fd);
		}
	}
}
