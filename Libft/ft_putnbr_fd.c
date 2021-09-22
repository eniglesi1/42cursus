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

void	blake(int fd, int n)
{
	char	c[12];
	int		i;

	i = ft_baits(n);
	if (n < 0)
	{
		n = n * -1;
		write(fd, "-", 1);
	}
	while (n > 0)
	{
		i--;
		c[i] = ((n % 10) + 48);
		n = n / 10;
	}
	write(fd, c, 12);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n != 0 && n != -2147483648)
		blake(fd, n);
	else if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
		write(fd, "0", 1);
}
