/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 13:11:22 by marvin            #+#    #+#             */
/*   Updated: 2021/09/18 13:11:22 by marvin           ###   ########.fr       */
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

static int	blake(int fd, int n)
{
	char	c[12];
	int		i;
	int		a;

	i = ft_baits(n);
	a = i;
	if (n < 0)
	{
		n = n * -1;
		a += write(fd, "-", 1);
	}
	while (n > 0)
	{
		i--;
		c[i] = ((n % 10) + 48);
		n = n / 10;
	}
	write(1, c, a);
	return(a);
}

int	ft_putnbr_fd(int n, int fd)
{
	int	a;

	a = 0;
	if (n != 0 && n != -2147483648)
		a = blake(fd, n);
	else if (n == -2147483648)
		a = write(fd, "-2147483648", 11);
	else
		a = write(fd, "0", 1);
	return(a);
}
