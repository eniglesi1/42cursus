#include <stdio.h>
void	ft_memset(void *ptr, int x, size_t n)
{
	while (n > 0)
	{
		n--;
		((char *)ptr)[n] = x;
	}
}
