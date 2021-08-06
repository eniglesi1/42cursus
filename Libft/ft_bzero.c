
#include <stdio.h>
void	ft_bzero(void *s, size_t n)
{
	while (n > 0)
	{
		n--;
		((char *)s)[n] = '\0';
	}
}
