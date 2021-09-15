/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:42:03 by eniglesi          #+#    #+#             */
/*   Updated: 2021/09/15 15:22:05 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_baits(int n)
{
	int	a;

	a = 0;
	while (n != 0)
	{
		n = n / 10;
		a++;
	}
	return (a);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		i;

	i = ft_baits(n);
	a = malloc(sizeof(char) * i + 1);
	if (!a)
		return (NULL);
	while (n != 0)
	{
		a[i] = ((n % 10) + 48);
		n = n / 10;
		i--;
	}
	return (a);
}
