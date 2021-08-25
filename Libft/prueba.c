/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 19:24:59 by eniglesi          #+#    #+#             */
/*   Updated: 2021/08/24 15:15:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int	ft_atoi (const char *s);

int	main(void)
{
	int			c;
	int			n = 50;
	char		string[76] = "15987566";
	char		string2[76];

	c = 53;
	c = c + n;
	printf("before = %s, %d\n", string, c);
	printf("%d\n%d\n", ft_atoi(string), atoi(string));
	printf("after  = %s\n", string2);
}