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

static void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*a;

	a = malloc(nmemb * size);
	if (!a)
		return (NULL);
	ft_bzero(a, nmemb * size);
	return (a);
}

static int	fakexplicator(char *extra)
{
	int	i;

	i = 0;
	while (extra[i] != '\n' && extra[i])
		i++;
	if (extra[i] == '\n')
		return (i);
	return (-1);
}

static char	*me_fumo_4_porros(char *string, char *extra, int aux)
{
	int	i;

	i = 0;
	while (extra[i] != '\n')
		i++;
	i++;
    if(extra[i])
        ft_strlcpy(extra, &extra[i], ft_strlen(extra + i) + 1);
	return (ft_realloc(string, aux));
}

static int    repet(char *string, char *extra)
{
    int    aux;

    aux = 0;
	while (extra[aux] != '\n' && extra[aux])
	{
		string[aux] = extra[aux];
		aux++;
	}
    return (aux);
}

char	*get_next_line(int fd)
{
	char			*string;
	static char		extra[BUFFER_SIZE + 1];
	int				baits;
	int				j;
	int				aux;

	string = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
	if (extra[0])
		ft_bzero(extra, BUFFER_SIZE	+ 1);
	if (string == NULL)
		return (NULL);
	baits = -7;
	aux = repet(string, extra);
	if (extra[aux] == '\n')
	{
		string[aux] = '\n';
        return (me_fumo_4_porros(string, extra, aux));
	}
	while ((fakexplicator(extra) == -1 && baits == BUFFER_SIZE) || baits == -7)
	{
		baits = read(fd, extra, BUFFER_SIZE);
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
		}
	}
	
	if (baits == 0 && aux == 0)
	{
		free(string);
		return (NULL);
	}
	if (baits == 0)
		return (string);
	if (extra[j] == '\n')
	{
		string[aux] = '\n';
		string = me_fumo_4_porros(string, extra, aux);
	}
	return (string);
}
