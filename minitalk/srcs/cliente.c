# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <signal.h>
# include <string.h>

void	send_binary(int j, pid_t pid_server)
{
	printf("send_binary\n");
	if (j >= 128)
	{
		j -=128;
		kill(pid_server, 31);
		printf("128\n");
	}
	else
		kill(pid_server, 30);
	sleep(1);
	if (j >= 64)
	{
		j -=64;
		kill(pid_server, 31);
		printf("64\n");
	}
	else
		kill(pid_server, 30);
	sleep(1);
	if (j >= 32)
	{
		j -=32;
		kill(pid_server, 31);
		printf("32\n");
	}
	else
		kill(pid_server, 30);
	sleep(1);
	if (j >= 16)
	{
		j -=16;
		kill(pid_server, 31);
		printf("16\n");
	}
	else
		kill(pid_server, 30);
	sleep(1);
	if (j >= 8)
	{
		j -=8;
		kill(pid_server, 31);
		printf("8\n");
	}
	else
		kill(pid_server, 30);
	sleep(1);
	if (j >= 4)
	{
		j -=4;
		kill(pid_server, 31);
		printf("4\n");
	}
	else
		kill(pid_server, 30);
	sleep(1);
	if (j >= 2)
	{
		j -=2;
		kill(pid_server, 31);
		printf("2\n");
	}
	else
		kill(pid_server, 30);
	sleep(1);
	if (j >= 1)
	{
		j -=1;
		kill(pid_server, 31);
		printf("1\n");
	}
	else
		kill(pid_server, 30);
	sleep(1);
}

static void	end(pid_t pid_server)
{
	int	i;

	printf("end\n");
	i = 0;
	while(i < 8)
	{
		kill(pid_server, 30);
		sleep(1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	pid_t	pid_server;
	int		i;

	i = 0;
	if (argc == 3)
	{
		pid_server = atoi(argv[1]);
		while(argv[2][i])
		{
			send_binary((unsigned char)argv[2][i], pid_server);
			i++;
		}
		end(pid_server);
	}
	return (0);
}
