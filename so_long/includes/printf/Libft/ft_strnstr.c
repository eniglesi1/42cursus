/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:54:36 by marvin            #+#    #+#             */
/*   Updated: 2021/08/24 14:54:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned long	i;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big && len != 0 && big[i])
	{
		i = 0;
		while (little[i] == big[i])
		{
			i++;
			if (little[i] == '\0' && len >= i)
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
