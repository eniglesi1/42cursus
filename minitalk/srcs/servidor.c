# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <signal.h>
# include <string.h>

static char *str_b;

void	bintoa(int signal)
{
	printf("bintoa\nlucd");
	int	i;
	int j;

	j = 0;
	i = strlen(str_b);
	if (signal == 30)
		str_b[i] = '0';
	if (signal == 31)
		str_b[i] = '1';
	str_b[i + 1] = 0;
	while(j < 8 && ((i + 1) % 8) == 0)
	{
		if (str_b[i - j] == '1')
			break ;
		j++;
	}
	if (j == 8 && ((i + 1) % 8) == 0)
	{
		printf("%s _______1 \n", str_b);
		free(str_b);
		str_b = malloc(sizeof(char) * 2);
		str_b[0] = 0;
	}
	printf("%s -------- \n", str_b);
	char *aux = malloc(sizeof(char) * strlen(str_b));
	strcpy(aux, str_b);
	free(str_b);
	str_b = malloc(sizeof(char) * (strlen(aux) + 1));
	printf("%s -------- \n", str_b);
	strcpy(str_b, aux);
	free(aux);
	printf("%s -------- \n", str_b);
}

int	main()
{
	pid_t	pid_server;

	str_b = malloc(sizeof(char) * 2);
	str_b[0] = 0;
	signal(30, bintoa);
	signal(31, bintoa);
	pid_server = getpid();
	printf("Servicio = %i\n", pid_server);
	while(1)
	{
		sleep(2);
		printf("zzzZZZzzz\n");
	}
	return (0);
}
