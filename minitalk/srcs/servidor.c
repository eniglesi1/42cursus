/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   servidor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 20:41:15 by eniglesi          #+#    #+#             */
/*   Updated: 2022/05/09 20:41:17 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <string.h>
#include "../includes/printf/ft_printf.h"

char	*savechar(char *i, char *str)
{
	char			*aux;
	unsigned long	j;

	j = 0;
	aux = malloc(sizeof(char) * ft_strlen(str) + 2);
	if (!aux)
		exit(write(1, "Error", 5) - 5);
	while (j++ < ft_strlen(str))
		aux[j - 1] = str[j - 1];
	aux[j - 1] = *i;
	aux[j] = 0;
	free(str);
	*i = 0;
	return (aux);
}

char	*print_str(char *str)
{
	write(1, str, ft_strlen(str));
	free(str);
	return (0);
}

void	btoa(int signal)
{
	static char	c;
	static int	num;

	if (!num)
		num = 8;
	if (!c)
		c = 0;
	num--;
	if (signal == 30)
		c += 0 << num;
	if (signal == 31)
		c += 1 << num;
	if (num == 0)
	{
		write(1, &c, 1);
		num = 8;
		c = 0;
	}
}

int	main(void)
{
	pid_t	pid_server;

	pid_server = getpid();
	ft_printf("Pid del servidor = %d\n", pid_server);
	signal(30, btoa);
	signal(31, btoa);
	while (1)
		sleep(1);
	return (0);
}
