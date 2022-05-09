# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <signal.h>
# include <string.h>

static char *str_b;

void	bintoa(int signal)
{
	printf("bintoa\n");
	int		i;
	int 	j;
	char	*aux;

	j = 0;
	i = strlen(str_b);
	printf("%s -------- \n", str_b);
	aux = calloc(sizeof(char), i + 2);
	strcpy(aux, str_b);
	free(str_b);
	if (signal == 30)
		aux[i] = '0';
	if (signal == 31)
		aux[i] = '1';
	while(j < 8 && ((i + 1) % 8) == 0)
	{
		if (aux[i - j] == '1')
			break ;
		j++;
	}
	if (j == 8 && ((i + 1) % 8) == 0)
	{
		free(aux);
		str_b = calloc(sizeof(char), 1);
	}
	else
	{
		str_b = calloc(sizeof(char), (strlen(aux)));
		strcpy(str_b, aux);
		free(aux);
	}
}

int	main()
{
	pid_t	pid_server;

	str_b = calloc(sizeof(char), 2);
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
