/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:56:32 by marvin            #+#    #+#             */
/*   Updated: 2021/09/08 23:56:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s);

int	main(void)
{
	int			c;
	int			n = 50;
	char		string[76] = "hola";
	char		*string2;

	c = 53;
	c = c + n;
	string2 = strdup(string);
	printf("before = %s, %d\n", string2, c);
	printf("%s !\n%s !\n", ft_strdup(string), strdup(string));
	string2 = ft_strdup(string);
	printf("after  = %s\n", string2);
}
