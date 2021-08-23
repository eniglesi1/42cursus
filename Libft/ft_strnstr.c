/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:50:21 by eniglesi          #+#    #+#             */
/*   Updated: 2021/08/23 18:42:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	if(*little == '\0')
		return ((char *)big);
	while(big && len != 0)
	{
		i = 0;
		while(little[i] == big[i])
		{
			i++;
			if(little[i] == '\0')
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}