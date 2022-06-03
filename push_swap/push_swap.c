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

#include "push_swap.h"

int main(int argc, char **argv)
{
	int	i;
	int	min;
	int	max;
	int	*a;
	int	*b;

	i = 1;
	parseo(argc, argv);
	a = ft_calloc(sizeof(int) * argc);
	if (!a)
		exit(write(1, "Malloc Error", 12) - 12);
	b = ft_calloc(sizeof(int) * argc);
	if (!b)
		exit(write(1, "Malloc Error", 12) - 12);
	while (i <= argc)
	{
		a[i - 1] = atoi(argv[i]);
		i++;
	}
	min = minint(a);
	max = maxint(a);
	while (ordenados(a, b) != 1)
	{
		if (a[0] == min)
			r(a);
		while (a[0] && a[0] > a[ft_strlen(a)] && a[0] != min)
			r(a);
		while (a[0] && a[0] < a[ft_strlen(a)] && a[0] != min)
			p(b);
		if (a[0] == min)
		{
			r(a)
			while(a[0] != min)
			{
			}
		}
	}
	return (0);
}
2 3 4 5 84 94 920 942 2394
304 9
