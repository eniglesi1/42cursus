/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:28:58 by eniglesi          #+#    #+#             */
/*   Updated: 2021/09/07 13:29:00 by eniglesi         ###   ########.fr       */
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
