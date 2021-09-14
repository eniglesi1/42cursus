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

char *ft_strtrim(char *s1, char const *set)
{
	int	b;
	int	i;
	char	*a;

	a = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!a)
		return (NULL);
	i = 0;
	b = 0;
	while (s1[b] == set[b])
		b++;
	while (s1[b] != set[i])
	{
		a[i] = s1[b];
		b++;
		i++;
	}
	return (a);
}
