/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 19:24:59 by eniglesi          #+#    #+#             */
/*   Updated: 2021/08/23 18:39:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
char	*ft_strnstr (const char *s1, const char *s2, size_t n);

int	main(void)
{
	int			c;
	int			n = 50;
	char		string[76] = "159875656566526565";
	char		string2[76];

	c = 53;
	printf("before = %s, %d\n", string, c);
	printf("%s\n%s\n", ft_strnstr(string, string2, n), ft_strnstr(string, string2, n));
	printf("after  = %s\n", string2);
}