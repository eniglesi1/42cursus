#include <stdio.h>
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	a[42];
	int		aux;

	aux = n;
	while (n > 0)
	{
		n--;
		a[n] = ((char *)src)[n];
	}
	while (aux > 0)
	{
		aux--;
		((char *)dest)[aux] = a[aux];
	}
	return (dest);
}
