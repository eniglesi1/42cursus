/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <eniglesi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:47:41 by eniglesi          #+#    #+#             */
/*   Updated: 2021/08/06 19:26:37 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_memset(void *ptr, int x, size_t n)
{
	while (n > 0)
	{
		n--;
		((char *)ptr)[n] = x;
	}
}
