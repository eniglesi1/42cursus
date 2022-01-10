/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <eniglesi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:50:37 by eniglesi          #+#    #+#             */
/*   Updated: 2021/09/27 09:14:09 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	a;
	int	b;
	int	neg;

	neg = 0;
	a = 0;
	b = 0;
	while (nptr[b] == 0 || nptr[b] == 9 || nptr[b] == 10 || nptr[b] == 11
		|| nptr[b] == 12 || nptr[b] == 13)
		b++;
	if (nptr[b] == '-')
		neg++;
	else if (nptr[b] == '+')
		b++;
	b = b + neg;
	while (nptr[b] != '\0' && nptr[b] > 47 && nptr[b] < 58)
	{
		a = a * 10 + (nptr[b] - 48);
		b++;
	}
	if (neg % 2 == 1)
		a = a * -1;
	return (a);
}
