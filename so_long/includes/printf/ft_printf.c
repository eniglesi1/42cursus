/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:48:56 by eniglesi          #+#    #+#             */
/*   Updated: 2022/01/10 18:49:01 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"

static int	ft_baits(unsigned long n)
{
	long	a;

	a = 0;
	while (n != 0)
	{
		n /= 16;
		a++;
	}
	return (a);
}

static int	ft_hexa(unsigned long i, char *base, int n)
{
	char	*c;
	long	aux;
	int		baits;

	aux = ft_baits(i);
	c = ft_calloc(sizeof(char), aux + 1);
	baits = 0;
	if (n == 4)
		baits += ft_putstr_fd("0x", 1);
	if (i == 0)
		baits += ft_putchar_fd('0', 1);
	while (aux >= 0 && i > 0)
	{
		aux--;
		c[aux] = base[i % 16];
		i /= 16;
	}
	baits += ft_putstr_fd(c, 1);
	free(c);
	return (baits);
}

static int	ft_putunsigned(unsigned int a, int fd)
{
	int	b;

	b = 0;
	if (a < 0)
		a += 4294967295;
	if (a / 10 > 0)
		b += ft_putnbr_fd(a / 10, fd);
	b += ft_putnbr_fd(a % 10, fd);
	return (b);
}

static int	put(char a, va_list str)
{
	int	baits;

	baits = 0;
	if (a == '%')
		baits = write(1, "%", 1);
	else if (a == 's')
		baits = ft_putstr_fd(va_arg(str, char *), 1);
	else if (a == 'c')
		baits = ft_putchar_fd(va_arg(str, int), 1);
	else if (a == 'd' || a == 'i')
		baits = ft_putnbr_fd(va_arg(str, int), 1);
	else if (a == 'u')
		baits = ft_putunsigned(va_arg(str, unsigned int), 1);
	else if (a == 'x')
		baits = ft_hexa(va_arg(str, unsigned int), "0123456789abcdef", 0);
	else if (a == 'X')
		baits = ft_hexa(va_arg(str, unsigned int), "0123456789ABCDEF", 0);
	else if (a == 'p')
		baits = ft_hexa(va_arg(str, unsigned long int), "0123456789abcdef", 4);
	return (baits);
}

int	ft_printf(const char *a, ...)
{
	int		i;
	int		baits;
	va_list	args;

	if (!a)
		return (0);
	va_start(args, a);
	baits = 0;
	i = 0;
	while (a[i])
	{
		if (a[i] == '%')
		{
			i++;
			baits += put(a[i], args);
		}
		else
			baits += write(1, &(a[i]), 1);
		i++;
	}
	va_end(args);
	return (baits);
}
