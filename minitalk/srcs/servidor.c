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

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <signal.h>
# include <string.h>
# include "../includes/printf/ft_printf.h"

char *str;

void	ft_realloc(void)
{
	char	*aux;

	aux = ft_calloc(sizeof(char), ft_strlen(str) + 1);
	ft_strlcpy(aux, str, ft_strlen(str) + 1);
	free(str);
	str = ft_calloc(sizeof(char), ft_strlen(aux) + 2);
	ft_strlcpy(str, aux, ft_strlen(aux) + 1);
	free(aux);
}

void	print_str(void)
{
	int		i;
	unsigned char	*aux;

	aux = ft_calloc(sizeof(char), (ft_strlen(str) / 8) + 1);
	i = 0;
	while (str[i * 8])
	{
		if (str[i * 8] == '1')
			aux[i] += 128;
		if (str[(i * 8) + 1] == '1')
			aux[i] += 64;
		if (str[(i * 8) + 2] == '1')
			aux[i] += 32;
		if (str[(i * 8) + 3] == '1')
			aux[i] += 16;
		if (str[(i * 8) + 4] == '1')
			aux[i] += 8;
		if (str[(i * 8) + 5] == '1')
			aux[i] += 4;
		if (str[(i * 8) + 6] == '1')
			aux[i] += 2;
		if (str[(i * 8) + 7] == '1')
			aux[i] += 1;
		i++;
	}
	ft_printf("%s\n", aux);
	free(str);
	free(aux);
	str = ft_calloc(sizeof(char), 2);
}

void	bintoa(int signal)
{

	int	i;
	int	j;

	j = 0;
	i = ft_strlen(str);
	ft_realloc();
	if (signal == 30)
		str[i] = '0';
	if (signal == 31)
		str[i] = '1';
	while(str[(i) - j] == '0' && j < 8)
		j++;
	if(j == 8 && (i + 1) % 8 == 0)
		print_str();
}

int	main()
{
	pid_t	pid_server;

	str = ft_calloc(sizeof(char), 2);
	signal(30, bintoa);
	signal(31, bintoa);
	pid_server = getpid();
	ft_printf("Pid_server = %i\n", pid_server);
	while(1)
	{
		sleep(2);
	}
	return (0);
}
