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

//char	*savechar(int *i, char *str)
//{
//	char			*aux;
//	unsigned long	j;
//
//	j = 0;
//	aux = malloc(sizeof(char) * ft_strlen(str) + 2);
//	if (!aux)
//		exit(write(1, "Error", 5) - 5);
//	while (j++ < ft_strlen(str))
//		aux[j - 1] = str[j - 1];
//	aux[j - 1] = *i;
//	aux[j] = 0;
//	free(str);
//	*i = 0;
//	return (aux);
//}
//
unsigned char	*print_str(char *str)
{
	write(1, str, ft_strlen(str));
	free(str);
	return (0);
}

unsigned char	*ft_realloc(unsigned char *str, int i)
{
	unsigned	char	*aux;
	unsigned	long	j;

	if (str)
	{
		j = 0;
		aux = ft_calloc(sizeof(char), ft_strlen((char *)str) + 2);
		if (!aux)
			exit(write(1, "Error", 5) - 5);
		while (j++ < ft_strlen((char *)str))
			aux[j - 1] = str[j - 1];
		i++;
		free(str);
		return (aux);
	}
	
}

void	btoa(int signal)
{
	static unsigned char	*str;
	static int				i;
	static int				num;

	if (!str)
		str = ft_calloc(sizeof(char), (i = 0) + 2);
	else if (!num)
		str = ft_realloc(str, i++);
	if (!num)
		num = 128;
	if (!i)
		i = 0;
	if (signal == 31)
		str[i] += num;
	num /= 2;
	if (num == 0 && str[i] == 0)
		str = print_str((char *)str);
}

//void	btoa(int signal)
//{
//	static char	*str;
//	static int	i;
//	static int	num;
//
//	if (!num)
//		num = 128;
//	if (!i)
//		i = 0;
//	if (signal == 31)
//		i += num;
//	num /= 2;
//	if (num == 0 && i == 0)
//		str = print_str(str);
//	if (num == 0 && i != 0)
//		str = savechar(&i, str);
//}
//
int main()
{
	pid_t	pid_server;

	pid_server = getpid();
	ft_printf("Pid del servidor = %d\n", pid_server);
	signal(30, btoa);
	signal(31, btoa);
	while (1)
		pause();
	return (0);
}




/*
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
*/
