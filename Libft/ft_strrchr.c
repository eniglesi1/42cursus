#include <stdio.h>
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i != 0)
	{
		i--;
		if (s[i] == c)
			return (((char *)s) + i);
	}
	return (NULL);
}
