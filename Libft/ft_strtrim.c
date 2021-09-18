/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:24:24 by eniglesi          #+#    #+#             */
/*   Updated: 2021/09/18 12:15:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char *s1, char const *set)
{
	int		b;
	int		i;
	char	a[ft_strlen(s1) + 1];
	char	*aux;

	i = 0;
	b = 0;
	if (set[0] == 0)
	{
		aux = malloc(ft_strlen(s1) + 1);
		ft_strlcpy(aux, s1, ft_strlen(s1) + 1);
		return (aux);
	}
	while (set[i] != 0)
	{
		while (s1[b] == set[i])
		{
			b++;
		}
		i++;
	}
	i = 0;
	if (s1[b] != set[0] && s1[b] != 0)
		while (s1[b] != set[0] && s1[b] != 0)
		{
			a[i] = s1[b];
			i++;
			b++;
		}
	else
      return (malloc(1));
	i = 0;
	aux = malloc((ft_strlen(a) + 1) * sizeof(char));
	if (!aux)
		return (NULL);
	if (*s1 == 0 && *set == 0)
	{
		ft_bzero(aux, 1);
		return (aux);
	}
	while (a[i])
	{
		aux[i] = a[i];
		i++;
	}
	return (aux);
}
