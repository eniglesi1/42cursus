/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:15:34 by eniglesi          #+#    #+#             */
/*   Updated: 2022/05/13 12:15:36 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void numparam(int argc)
{
	if (argc == 1)
		exit(write(1, "Error\n", 5) - 5);
}

void allints(char **argv)
{
	int	i;

	while (argv[0])
	{
		i == atoi(argv[0]);
		argv++;
	}
}


void parseo(int argc, char **argv)
{
	numparam(argc);
	allints(argv + 1);
	dupnum(argv);
}

int main(int argc, char **argv)
{
	t_data	data;

	parseo(argc, argv);
	data.i = 1;
	data.a = ft_calloc(sizeof(int), argc);
	if (!data.a)
		exit(write(1, "Malloc Error", 12) - 12);
	data.b = ft_calloc(sizeof(int), argc);
	if (!data.b)
		exit(write(1, "Malloc Error", 12) - 12);
	while (data.i <= argc)
	{
		data.a[data.i- 1] = atoi(argv[data.i]);
		data.i++;
	}
	while (org_ab(data.a, data.b) != 1)
	{
		r(data.b, 0);
		data.min = limits(data.a, 0);
		data.max = limits(data.a, 1);
		while (org(data.a, 0))
		{
			if (data.a[0] == data.min)
				r(data.a, 0);
			while (data.a[0] > data.a[ft_intlen(data.a) - 1] && data.a[0] != data.min)
				r(data.a, 0);
			while (data.a[0] < data.a[ft_intlen(data.a) - 1] && data.a[0] != data.min)
				p(data.b, 1);
		}
		r(data.a, 0);
		data.min = limits(data.b, 0);
		data.max = limits(data.b, 1);
		while (org(data.b, 1))
		{
			if (data.b[0] == data.min)
				r(data.b, 1);
			while (data.b[0] > data.b[ft_intlen(data.b) - 1] && data.b[0] != data.min)
				r(data.b, 1);
			while (data.b[0] < data.b[ft_intlen(data.b) - 1] && data.b[0] != data.min)
				p(data.a, 0);
		}
	}
	while (data.b[0] && !org(data.a, 0))
	{
		if (data.b[0] > data.a[ft_intlen(data.a) - 1] && data.b[0] < data.a[0])
			p(data.b,1);
		else
			r(data.a, 0);
	}
	return (0);
}
