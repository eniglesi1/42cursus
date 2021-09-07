f/* ************************************************************************** */
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

#include "libft.h"

char *ft_strdup(const char *s);

int	main(void)
{
	int			c;
	int			n = 50;
	char		string[76] = "";
	char		*string2;

	c = 53;
	c = c + n;
	string2 = strdup(string);
	printf("before = %s, %d\n", string2, c);
	printf("%sn%s\n", ft_strdup(string), strdup(string));
	string2 = ft_strdup(string);
	printf("after  = %s\n", string2);
}
