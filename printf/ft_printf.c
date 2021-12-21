# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdint.h>
# include <unistd.h>
# include <stdarg.h>
# include "../Libft/libft.h"

static int	ft_baits(int n)
{
	int	a;

	a = 0;
	while (n != 0)
	{
		n = n / 16;
		a++;
	}
	return (a);
}

static int	ft_hexa(char a, long i)
{
	char	*base;
	char	*c;
	int		aux;
	int		baits;

	aux = ft_baits(i) + 2;
	c = ft_calloc(sizeof(char), aux + 1);
	baits = 0;
	base = "0123456789abcdef";
	if (a == 'p')
		baits += ft_putstr_fd("0x", 1);
	if (a == 'X')
		base = "0123456789ABCDEF";
	while (i > 0)
	{
		aux--;
		c[aux] = base[i % 16];
		i /= 16;
	}
	baits += ft_putstr_fd(c, 1);
	free(c);
	return(baits);
}

static int	ft_putunsigned(long a, int fd)
{
	int b;

	b = 0;
	if (a < 0)
		a += 4294967295;
	if (a / 10 > 0)
		b += ft_putnbr_fd(a / 10, fd);
	b += ft_putnbr_fd(a % 10, fd);
	return(b);
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
		baits = ft_putunsigned(va_arg(str, long), 1);
	else if (a == 'p' || a == 'x' || a == 'X')
		baits = ft_hexa(a, va_arg(str, long));
	return(baits);
}

int	ft_printf(const char *a, ...)
{
	int		i;
	int		baits;
	va_list	args;

	if (!a)
		return(0);
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
		{
			write(1, &(a[i]), 1);
			baits++;
		}
		i++;
	}
	va_end(args);
	return(baits);
}
