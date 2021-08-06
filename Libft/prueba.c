#include <stdio.h>
#include <string.h>
#include <ctype.h>
unsigned long	ft_strlcat(char *dst, const char *src, size_t size);

int	main(void)
{
	int			c;
	char	string[] = "Morty no? Ese pequeño son of a bitch";
	char	string2[76] = "Hola mundo de Rick y Morty, en fin, ";

	c = strlen("Morty no? Ese pequeño son of a bitch");
	printf("before = %s\n",string2);
	printf("%lu\n", ft_strlcat(string2, string, 73));
	printf("%lu\n", strlen("Hola mundo de Rick y Morty, en fin, Morty no? Ese pequeño son of a bitch"));
	printf("after  = %s\n",string2);
}
