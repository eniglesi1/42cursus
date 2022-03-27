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

static int	ft_baits(int n)
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

static char	*ft_intochar(int i, int n)
{
	char	*a;

	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	a = malloc(sizeof(char) * i + 1);
	if (!a)
		return (NULL);
	a[i] = 0;
	while (n != 0)
	{
		i--;
		a[i] = ((n % 10) + 48);
		n = n / 10;
	}
	if (i == 1)
		a[0] = '-';
	return (a);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		i;

	i = ft_baits(n);
	if (n != 0 && n != -2147483648)
		a = ft_intochar(i, n);
	else if (n == -2147483648)
	{
		a = malloc(12);
		ft_strlcpy(a, "-2147483648", 12);
	}
	else
	{
		a = malloc(2);
		ft_strlcpy(a, "0", 2);
	}
	return (a);
}
