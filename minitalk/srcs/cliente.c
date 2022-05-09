/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cliente.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 20:41:33 by eniglesi          #+#    #+#             */
/*   Updated: 2022/05/09 20:41:36 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <signal.h>
# include <string.h>
# include "../includes/printf/ft_printf.h"

void	send_binary(int j, pid_t pid_server)
{
	if (j >= 128)
	{
		j -=128;
		kill(pid_server, 31);
	}
	else
		kill(pid_server, 30);
	usleep(100);
	if (j >= 64)
	{
		j -=64;
		kill(pid_server, 31);
	}
	else
		kill(pid_server, 30);
	usleep(100);
	if (j >= 32)
	{
		j -=32;
		kill(pid_server, 31);
	}
	else
		kill(pid_server, 30);
	usleep(100);
	if (j >= 16)
	{
		j -=16;
		kill(pid_server, 31);
	}
	else
		kill(pid_server, 30);
	usleep(100);
	if (j >= 8)
	{
		j -=8;
		kill(pid_server, 31);
	}
	else
		kill(pid_server, 30);
	usleep(100);
	if (j >= 4)
	{
		j -=4;
		kill(pid_server, 31);
	}
	else
		kill(pid_server, 30);
	usleep(100);
	if (j >= 2)
	{
		j -=2;
		kill(pid_server, 31);
	}
	else
		kill(pid_server, 30);
	usleep(100);
	if (j >= 1)
	{
		j -=1;
		kill(pid_server, 31);
	}
	else
		kill(pid_server, 30);
	usleep(100);
}

static void	end(pid_t pid_server)
{
	int	i;

	i = 0;
	while(i < 8)
	{
		kill(pid_server, 30);
		usleep(100);
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
		pid_server = ft_atoi(argv[1]);
		while(argv[2][i])
		{
			send_binary((unsigned char)argv[2][i], pid_server);
			i++;
		}
		end(pid_server);
	}
	return (0);
}
