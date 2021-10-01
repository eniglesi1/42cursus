/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:48:04 by eniglesi          #+#    #+#             */
/*   Updated: 2021/10/01 15:27:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	aux;

	aux = 0;
	while (n > 0 && ft_strlen(src) > ft_strlen(dest))
	{
		n--;
		((char *)dest)[n] = ((char *)src)[n];
	}
	while (aux < n && ft_strlen(src) <= ft_strlen(dest))
	{
		((char *)dest)[aux] = ((char *)src)[aux];
		aux++;
	}
	return (dest);
}
