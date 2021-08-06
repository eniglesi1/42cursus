#include <stdio.h>
unsigned long	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	a;
	int	i;

	a = 0;
	i = 0;
	while (dst[a] != '\0')
		a++;
	size = (size - a) - 1;
	while (size > 0)
	{
		if (src[i] != '\0')
		{
			dst[a] = src[i];
			a++;
			i++;
		}
		size--;
	}
	while (src[i] != '\0')
	{
		a++;
		i++;
	}
	return (a);
}
