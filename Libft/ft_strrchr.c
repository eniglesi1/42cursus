/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <eniglesi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:49:54 by eniglesi          #+#    #+#             */
/*   Updated: 2021/08/06 19:25:55 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	if (s[i] == (unsigned char)c)
		return (((char *)s) + i);
	while (i != 0)
	{
		i--;
		if (s[i] == (unsigned char)c)
			return (((char *)s) + i);
	}
	return (NULL);
}
