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

void	send_binary(char c, pid_t pid_server, int len)
{
	int	num;

	num = 7;
	while (num >= 0)
	{
		if (((c >> num) & 1) == 1)
			kill(pid_server, 31);
		else
			kill(pid_server, 30);
		if (len <= 500)
			usleep(50);
		else if (len > 500 && len < 1000)
			usleep(len / 10);
		else if (len > 100000)
			usleep(1500);
		else
			usleep(1000);
		num--;
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
		while (argv[2][i] != 0)
		{
			send_binary(argv[2][i], pid_server, ft_strlen(argv[2]));
			i++;
		}
		send_binary(0, pid_server, 0);
	}
	return (0);
}
