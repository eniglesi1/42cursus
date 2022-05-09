/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <eniglesi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:50:11 by eniglesi          #+#    #+#             */
/*   Updated: 2021/09/27 11:54:06 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n != i)
	{
		if (s2[i] - s1[i] != 0)
		{
			i = s1[i] - s2[i];
			return (i);
		}
		i++;
	}
	return (0);
}
