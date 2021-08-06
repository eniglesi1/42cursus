/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <eniglesi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 19:18:21 by eniglesi          #+#    #+#             */
/*   Updated: 2021/08/06 19:25:52 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctype.h"
int	ft_strncmp (const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] - s2[i] != 0 && n != 0)
		{
			i = s1[i] - s2[i];
			return (i);
		}
		else if (n == 0)
			return (0);
		i++;
		n--;
	}
	return (0);
}
