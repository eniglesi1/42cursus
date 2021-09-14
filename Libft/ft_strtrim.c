/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:24:24 by eniglesi          #+#    #+#             */
/*   Updated: 2021/09/14 18:24:26 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is(int c, int b)
{
	if (c == b)
		return (1);
	else
		return (0);
}

char *ft_strtrim(char *s1, char const *set)
{
	int	a;
	int	i;

	i = 0;
	a = 0;
	while (ft_is(s1[a], set[i]) == 1)
	{
		s1[a] = s1[a + 1];
		a++;
		i++;
	}
	
	a = ft_strlen(s1);
	while (ft_is(s1[a], set[i]) == 1)
	{
		s1[a] = s1[a + 1];
		a--;
		i--;
	}
	return (s1);
}
