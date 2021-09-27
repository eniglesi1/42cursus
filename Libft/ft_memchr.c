/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <eniglesi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:50:04 by eniglesi          #+#    #+#             */
/*   Updated: 2021/09/27 09:29:32 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
