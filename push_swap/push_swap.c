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
	while (org_ab(a, b) != 1)
	{
		min = limits(a, 0);
		max = limits(a, 1);
		while (org(a, 0))
		{
			if (a[0] == min)
				r(a, 0);
			while (a[0] > a[ft_strlen(a) - 1] && a[0] != min)
				r(a, 0);
			while (a[0] < a[ft_strlen(a) - 1] && a[0] != min)
				p(b, 1);
		}
		min = limits(b, 0);
		max = limits(b, 1);
		while (org(b, 1))
		{
			if (b[0] == min)
				r(b, 1);
			while (b[0] > b[ft_strlen(b) - 1] && b[0] != min)
				r(b, 1);
			while (b[0] < b[ft_strlen(b) - 1] && b[0] != min)
				p(a, 0);
		}
	}
	return (0);
}
2 3 4 5 84 94 920 942 2394
304 9 7 15 6 25 19
6 304
