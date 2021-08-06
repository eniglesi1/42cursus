#include <stdio.h>
#include <string.h>
char	*ft_strchr(const char *s, int c)
{
	while (s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
