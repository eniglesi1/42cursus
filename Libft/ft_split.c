/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:26:29 by eniglesi          #+#    #+#             */
/*   Updated: 2021/09/14 19:26:31 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**a;
	int		i;
	int		j;
	int		g;

	i = 0;
	j = 0;
	g = 0;
	a = malloc(sizeof(char) * ft_strlen(s));
	if (!a)
		return (NULL);
	if (!s)
		return (NULL);
	while (s)
	{
		while (s[i] != c)
		{
			a[j][g] = s[i];
			i++;
			g++;
		}
		g = 0;
		j++;
	}
	return (a);
}
