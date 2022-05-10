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

char	*g_str;

void	ft_realloc(void)
{
	char	*aux;

	aux = ft_calloc(sizeof(char), ft_strlen(g_str) + 1);
	ft_strlcpy(aux, g_str, ft_strlen(g_str) + 1);
	free(g_str);
	g_str = ft_calloc(sizeof(char), ft_strlen(aux) + 2);
	ft_strlcpy(g_str, aux, ft_strlen(aux) + 1);
	free(aux);
}

void	print_str(void)
{
	int				i;
	unsigned char	*aux;
	int				num;
	int				n;

	aux = ft_calloc(sizeof(char), (ft_strlen(g_str) / 8) + 1);
	i = 0;
	while (g_str[i * 8])
	{
		n = 0;
		num = 128;
		while (num >= 1)
		{
			if (g_str[(i * 8) + n] == '1')
				aux[i] += num;
			num /= 2;
			n++;
		}
		i++;
	}
	ft_printf("%s\n", aux);
	free(g_str);
	free(aux);
	g_str = ft_calloc(sizeof(char), 2);
}

void	bintoa(int signal)
{
	int	i;
	int	j;

	j = 0;
	i = ft_strlen(g_str);
	ft_realloc();
	if (signal == 30)
		g_str[i] = '0';
	if (signal == 31)
		g_str[i] = '1';
	while (g_str[(i) - j] == '0' && j < 8)
		j++;
	if (j == 8 && (i + 1) % 8 == 0)
		print_str();
}

int	main(void)
{
	pid_t	pid_server;

	g_str = ft_calloc(sizeof(char), 2);
	signal(30, bintoa);
	signal(31, bintoa);
	pid_server = getpid();
	ft_printf("Pid_server = %i\n", pid_server);
	while (1)
	{
		sleep(2);
	}
	return (0);
}
