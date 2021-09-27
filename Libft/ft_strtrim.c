/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <eniglesi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:24:24 by eniglesi          #+#    #+#             */
/*   Updated: 2021/09/27 09:17:39 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_recorte(char const *s1, char const *set)
{
	char	*a;
	int		i;

	i = 0;
	while (set[i])
	{
		while (set[i] == *s1)
			s1++;
		i++;
	}
	i = 0;
	while (*set != *s1)
	{
		i++;
		s1++;
	}
	a = malloc(sizeof(char) * i);
	ft_strlcpy(a, s1 - i, i + 1);
	return (a);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;

	if (!*set || !set)
	{
		a = malloc(ft_strlen(s1) + 1);
		if (!a)
			return (NULL);
		ft_strlcpy(a, s1, ft_strlen(s1) + 1);
		return (a);
	}
	if (!s1 || !*s1)
		return (malloc(1));
	a = ft_recorte(s1, set);
	return (a);
}
