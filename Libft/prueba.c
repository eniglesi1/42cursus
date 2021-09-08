<<<<<<< HEAD
  /* ************************************************************************** */
=======
/* ************************************************************************** */
>>>>>>> 79e1cfda2978e63b808df01c313c846db9cd17ad
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/08/06 19:24:59 by eniglesi          #+#    #+#             */
/*   Updated: 2021/08/27 16:10:32 by marvin           ###   ########.fr       */
=======
/*   Created: 2021/09/07 13:28:58 by eniglesi          #+#    #+#             */
/*   Updated: 2021/09/07 13:29:00 by eniglesi         ###   ########.fr       */
>>>>>>> 79e1cfda2978e63b808df01c313c846db9cd17ad
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
