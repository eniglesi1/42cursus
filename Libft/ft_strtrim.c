/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:24:24 by eniglesi          #+#    #+#             */
/*   Updated: 2021/09/17 22:41:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char *s1, char const *set)
{
	int		b;
	int		i;
	char	*a;

	a = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!a)
		return (NULL);
	i = 0;
	b = 0;
	if (*s1 == 0 && *set == 0)
	{
		ft_bzero(a, 1);
		return (a);
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
	while (s1[b] != set[0])
	{
		a[i] = s1[b];
		i++;
		b++;
	}
/*	while (s1[b] == set[b])
		b++;
	while (s1[b] != set[i])
	{
		a[i] = s1[b];
		b++;
		i++;
	}*/
	return (a);
}
