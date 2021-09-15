/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <eniglesi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:56:32 by marvin            #+#    #+#             */
/*   Updated: 2021/09/15 17:10:31 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	unsigned long	c;
	char			string[40] = "aaaaaaaaaaaaaaa?";
	char			string2[40] = "Estoy aparolando";

	c = ft_strlcpy(string2, string, 25);
	printf("before = %s, %lu\n", string2, c);
	char string3[40] = "Estoy aparolando";
	printf("%lu !\n", strlcpy(string3, string, 25));
	char string4[40] = "Estoy aparolando";
	printf("%lu !\n", ft_strlcpy(string4, string, 25));
	char string5[40] = "Estoy aparolando";
	c = strlcpy(string5, string, 25);
	printf("after  = %s, %lu\n", ft_strchr(string5, 'i'), c);
}
