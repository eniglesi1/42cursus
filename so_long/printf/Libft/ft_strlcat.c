/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:48:23 by eniglesi          #+#    #+#             */
/*   Updated: 2021/09/17 20:55:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	int		i;

	a = 0;
	i = 0;
	while (dst[a] != '\0')
		a++;
	if (size > a)
		size = (size - a) - 1;
	else
		return (size + ft_strlen(src));
	while (size > 0 && src[i] != '\0')
	{
		dst[a] = src[i];
		a++;
		i++;
		size--;
	}
	dst[a] = '\0';
	return (ft_strlen(dst) + ft_strlen(src) - i);
}
