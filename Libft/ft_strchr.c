/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <eniglesi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:49:47 by eniglesi          #+#    #+#             */
/*   Updated: 2021/08/06 19:25:58 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	a;

	a = 0;
	while (s)
	{
		if (s[a] == (unsigned char)c)
			return ((char *)s + a);
		a++;
	}
	return (NULL);
}
