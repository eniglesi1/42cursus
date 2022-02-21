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

static char	**ft_realoc(char **s1)
{
	char	**a;
	int		n;

	n = 0;
	while (s1[n])
		n++;
	n += 1;
	a = malloc(sizeof(char *) * n + 1);
	if (!a)
		return (s1);
	n = 0;
	ft_printf("\n--------------------\n");
	while (s1[n])
	{
		a[n] = malloc(sizeof(char) * ft_strlen(s1[n]));
		ft_strlcpy(a[n], s1[n], ft_strlen(s1[n]));
		ft_printf("%s\n", a[n]);
		free(s1[n]);
		n++;
	}
	ft_printf("--------------------\n");
	free(s1);
	return (a);
}

int	readmap(int fd,  char **mapa)
{
	int	i;

	i = 0;
	if (fd != -1)
	{
		while (mapa[i] != NULL)
		{
			ft_printf("\n%i línea, \n%s\n", i, mapa[i]);
			mapa = ft_realoc(mapa);
			i++;
			mapa[i] = get_next_line(fd);
			mapa[i + 1] = NULL;
		}
	}
	return (i);
}


