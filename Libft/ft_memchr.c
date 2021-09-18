/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:50:04 by eniglesi          #+#    #+#             */
/*   Updated: 2021/09/15 15:25:39 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void	*ft_memchr(char *s, int c, size_t n)
{
	while (s && n != 0)
	{
		if (*s == (unsigned char)c)
			return (s);
		s++;
		n--;
	}
	return (NULL);
}
