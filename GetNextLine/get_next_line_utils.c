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

void	ft_bzero(void *s, size_t n)
{
	while (n > 0)
	{
		n--;
		((char *)s)[n] = '\0';
	}
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	a;

	if (!dst || !src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	a = 0;
	while (a < (size - 1) && src[a] != '\0')
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (ft_strlen(src));
}

char	*ft_realloc(char *s1, int i)
{
	char	*a;

	i += ft_strlen(s1);
	if (i == 0)
	{
		free(s1);
		return (NULL);
	}
	a = malloc(sizeof(char) * i + 1);
	if (!a)
	{
		free(s1);
		return (NULL);
	}
	ft_bzero(a, sizeof(char) * i + 1);
	ft_strlcpy(a, s1, ft_strlen(s1) + 1);
	free(s1);
	return (a);
}
