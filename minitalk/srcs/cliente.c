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

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <string.h>
#include "../includes/printf/ft_printf.h"

void	send_binary(int j, pid_t pid_server)
{
	int	num;

	num = 128;
	while (num >= 1)
	{
		if (j >= num)
		{
			j -= num;
			kill(pid_server, 31);
		}
		else
			kill(pid_server, 30);
		usleep(500);
		num /= 2;
	}
}

static void	end(pid_t pid_server)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		kill(pid_server, 30);
		usleep(500);
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
		while (argv[2][i])
		{
			send_binary((unsigned char)argv[2][i], pid_server);
			i++;
		}
		end(pid_server);
	}
	return (0);
}
