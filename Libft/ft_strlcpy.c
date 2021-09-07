/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <eniglesi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:48:14 by eniglesi          #+#    #+#             */
/*   Updated: 2021/08/06 19:26:10 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned long	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned long	a;

	a = 0;
	while (a < (size - 1))
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	while (src[a] != '\0')
		a++;
	return (a);
}
