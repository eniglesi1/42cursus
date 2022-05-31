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
	int	*a;
	int	*b;

	i = 1;
	parseo(argc, argv);
	a = malloc(sizeof(int) * argc);
	b = malloc(sizeof(int) * argc);
	while (i <= argc)
	{
		a[i - 1] = atoi(argv[i]);
		i++;
	}
	return (0);
}
