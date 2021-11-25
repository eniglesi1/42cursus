
#include <stdio.h>
#include <stdarg.h>

int	ft_printf(const char *a, ...)
{
	va_list	arg;
	int	i;
	int	bits;

	if (!a)
		return NULL;
	va_start(arg, str);
	while (a[i])
	{
		if (a[i] == '%')
		{
			bits += printf_aux(a[i + 1], va_arg(arg, char *));
			i++;
		}
		else
		{
			write(1, a[i], 1);
			bits++;
		}
		i++;
	}
	va_end(arg);
	return	(bits);
}

int	printf_aux(char a, char *b)
{
	if (a == '%')
		write(1, '%', 1);
	if (a == 'c')
		write(1, b, 1);
	if (a == 's' || a == i || a == d || a == u)
		write(1, b, ft_strlen(b));
	if (a == 'p')
	{
		write(1, &b, ft_strlen(&b));
		return (ft_strlen(&b))
	}
	if (a == 'x')
		write(1, '%', 1);
	if (a == 'X')
		write(1, '%', 1);
		}
}
int main(void)
{
	ft_printf()
}











/*	int	cant;
int	i;
int	arg;

i++;
if (cant = 0)
	return (i);
*/
