/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <eniglesi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:48:23 by eniglesi          #+#    #+#             */
/*   Updated: 2021/08/06 19:26:07 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
unsigned long	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	a;
	int	i;

	a = 0;
	i = 0;
	while (dst[a] != '\0')
		a++;
	size = (size - a) - 1;
	while (size > 0)
	{
		if (src[i] != '\0')
		{
			dst[a] = src[i];
			a++;
			i++;
		}
		size--;
	}
	dst[a] = '\0';
	while (src[i] != '\0')
	{
		a++;
		i++;
	}
	return (a);
}
