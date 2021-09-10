s/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:56:32 by marvin            #+#    #+#             */
/*   Updated: 2021/09/09 10:34:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int			c;
	int			n = 50;
	char		string[76] = "hola, que tal estás?";
	char		*string2;
	
	c = 53;
	c = c + n;
	string2 = ft_substr(string, 3, 20);
	printf("before = %s, %d\n", string2, c);
	printf("%s !\n%s !\n", ft_substr(string, 7, 20), ft_substr(string, 7, 20));
	string2 = ft_substr(string, 3, 20);
	printf("after  = %s\n", string2);
}
