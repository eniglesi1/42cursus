#include <stdio.h>
unsigned long	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned long	a;

	a = 0;
	while (a < (size - 1))
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	while (src[a] != '\0')
		a++;
	return (a);
}
