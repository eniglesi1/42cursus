/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 19:18:21 by eniglesi          #+#    #+#             */
/*   Updated: 2021/08/15 09:53:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctype.h"
#include "stddef.h"
int	ft_strncmp (const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (n != i)
	{
		if (s1[i] - s2[i] != 0)
		{
			i = s1[i] - s2[i];
			return (i);
		}
		i++;
	}
	return (0);
}
