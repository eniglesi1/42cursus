#include <stdio.h>
#include "./printf/ft_printf.h"
int main(int argc, char **argv)
{
	while (argc != 0)
		printf("%i\n", ft_atoi(argv[--argc]));
//	printf("%d\n%d\n", '-', '+');
	return(0);
}
