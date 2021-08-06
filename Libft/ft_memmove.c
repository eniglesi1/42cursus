/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <eniglesi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:48:04 by eniglesi          #+#    #+#             */
/*   Updated: 2021/08/06 19:26:32 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	a[42];
	int		aux;

	aux = n;
	while (n > 0)
	{
		n--;
		a[n] = ((char *)src)[n];
	}
	while (aux > 0)
	{
		aux--;
		((char *)dest)[aux] = a[aux];
	}
	return (dest);
}
