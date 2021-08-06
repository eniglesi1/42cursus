/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <eniglesi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 19:24:59 by eniglesi          #+#    #+#             */
/*   Updated: 2021/08/06 19:25:23 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int	ft_strncmp (const char *s1, const char *s2, size_t n);

int	main(void)
{
	int			c;
	int			n = 30;
	char		string[76] = "15987565656656565";
	char		string2[76] = "1598";

	c = 53;
	printf("before = %s\n", string);
	printf("%d\n", ft_strncmp(string, string2, n));
	printf("after  = %s\n", string2);
}
