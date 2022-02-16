/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:47:28 by eniglesi          #+#    #+#             */
/*   Updated: 2022/01/13 12:47:31 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (!dst || !src)
		return (0);
	if (size == 0)
		return (i);
	a = 0;
	while (a < (size - 1) && src[a] != '\0')
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (i);
}

char	*ft_realloc(char *s1, int j)
{
	char	*a;
	int		i;
	int		n;

	i = 0;
	while (s1[i] != '\0')
		i++;
	i += j;
	if (i == 0)
		return (s1);
	a = malloc(sizeof(char) * i + 1);
	if (!a)
		return (s1);
	n = sizeof(char) * i + 1;
	while (n > 0)
	{
		n--;
		((char *)a)[n] = '\0';
	}
	ft_strlcpy(a, s1, (i - j) + 1);
	free(s1);
	return (a);
}
