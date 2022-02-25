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

#include "so_long.h"

int	baits(char **argv)
{
	int		i;
	int		fd;
	char	*str;

	i = 0;
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (-1);
	str = get_next_line(fd);
	while (str)
	{
		i += ft_strlen(str) + 1;
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
			ft_printf("\n%i línea, \n%s\n", i, mapa[i]);
			i++;
			mapa[i] = get_next_line(fd);
			mapa[i + 1] = NULL;
		}
	}
}
