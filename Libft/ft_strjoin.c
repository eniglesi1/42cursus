/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:23:07 by eniglesi          #+#    #+#             */
/*   Updated: 2021/09/17 22:06:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*a;
	char    aux[ft_strlen(s1) + ft_strlen(s2) + 1];
	char	*paux = malloc(1);

    ft_strlcpy(aux, s1, ft_strlen(s1) + 1);
	i = ft_strlcat((char *)aux, s2, ft_strlen(s2) + ft_strlen(s1) + 1);
	if (i == 0)
		return (paux);
	
	a = malloc(sizeof(char) * i + 1);
	if (!a)
		return (NULL);
	ft_strlcpy(a, aux, i + 1);
	return (a);
}
//https://pythontutor.com/c.html#code=%23%20include%20%3Cunistd.h%3E%0A%23%20include%20%3Cstdlib.h%3E%0A%23%20include%20%3Cstring.h%3E%0A%23%20include%20%3Cstddef.h%3E%0A%23%20include%20%3Cstdio.h%3E%0A%0A%0Aint%20%20%20%20ft_strlen%28const%20char%20*s%29%0A%7B%0A%20%20%20%20size_t%20%20%20%20i%3B%0A%0A%20%20%20%20i%20%3D%200%3B%0A%20%20%20%20while%20%28s%5Bi%5D%20!%3D%20'%5C0'%29%0A%20%20%20%20%20%20%20%20i%2B%2B%3B%0A%20%20%20%20return%20%28i%29%3B%0A%7D%0A%0A%0A%0Asize_t%20%20%20%20ft_strlcat%28char%20*dst,%20const%20char%20*src,%20size_t%20size%29%0A%7B%0A%20%20%20%20size_t%20%20%20%20a%3B%0A%20%20%20%20int%20%20%20%20i%3B%0A%0A%20%20%20%20a%20%3D%200%3B%0A%20%20%20%20i%20%3D%200%3B%0A%20%20%20%20while%20%28dst%5Ba%5D%20!%3D%20'%5C0'%29%0A%20%20%20%20%20%20%20%20a%2B%2B%3B%0A%20%20%20%20if%20%28size%20%3E%20a%29%0A%20%20%20%20%20%20%20%20size%20%3D%20%28size%20-%20a%29%20-%201%3B%0A%20%20%20%20else%0A%20%20%20%20%20%20%20%20return%20%28size%20%2B%20ft_strlen%28src%29%29%3B%0A%20%20%20%20while%20%28size%20%3E%200%20%26%26%20src%5Bi%5D%20!%3D%20'%5C0'%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20dst%5Ba%5D%20%3D%20src%5Bi%5D%3B%0A%20%20%20%20%20%20%20%20a%2B%2B%3B%0A%20%20%20%20%20%20%20%20i%2B%2B%3B%0A%20%20%20%20%20%20%20%20size--%3B%0A%20%20%20%20%7D%0A%20%20%20%20dst%5Ba%5D%20%3D%20'%5C0'%3B%0A%20%20%20%20return%20%28ft_strlen%28dst%29%20%2B%20ft_strlen%28src%29%20-%20i%29%3B%0A%7D%0A%0A%0Achar%20%20%20%20*ft_strjoin%28char%20const%20*s1,%20char%20const%20*s2%29%0A%7B%0A%20%20%20%20int%20%20%20%20%20%20%20%20i%3B%0A%20%20%20%20char%20%20%20%20*a%3B%0A%0A%20%20%20%20i%20%3D%20ft_strlcat%28%28char%20*%29s1,%20s2,%20ft_strlen%28s2%29%20%2B%20ft_strlen%28s1%29%20%2B%201%29%3B%0A%20%20%20%20if%20%28i%20%3D%3D%200%29%0A%20%20%20%20%20%20%20%20return%20%28NULL%29%3B%0A%20%20%20%20a%20%3D%20malloc%28sizeof%28char%29%20*%20i%20%2B%201%29%3B%0A%20%20%20%20if%20%28!a%29%0A%20%20%20%20%20%20%20%20return%20%28NULL%29%3B%0A%20%20%20%20ft_strlcpy%28a,%20s1,%20i%20%2B%201%29%3B%0A%20%20%20%20return%20%28a%29%3B%0A%7D%0A%0A%0Aint%20%20%20%20ft_strlcpy%28char%20*dst,%20const%20char%20*src,%20size_t%20size%29%0A%7B%0A%20%20%20%20size_t%20%20%20%20a%3B%0A%0A%20%20%20%20if%28!dst%20%7C%7C%20!src%29%0A%20%20%20%20%20%20%20%20return%20%280%29%3B%0A%20%20%20%20if%20%28size%20%3D%3D%200%29%0A%20%20%20%20%20%20%20%20return%20%28ft_strlen%28src%29%29%3B%0A%20%20%20%20%20%20%20%20%0A%20%20%20%20a%20%3D%200%3B%0A%20%20%20%20while%20%28a%20%3C%20%28size%20-%201%29%20%26%26%20src%5Ba%5D%20!%3D%20'%5C0'%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20dst%5Ba%5D%20%3D%20src%5Ba%5D%3B%0A%20%20%20%20%20%20%20%20a%2B%2B%3B%0A%20%20%20%20%7D%0A%20%20%20%20dst%5Ba%5D%20%3D%20'%5C0'%3B%0A%20%20%20%20return%20%28ft_strlen%28src%29%29%3B%0A%7D%0A%0Aint%20main%28%29%20%7B%0A%20%20char%20b%5B15%5D%20%3D%20%22tripouille%22%3B%0A%20%20printf%28%22%25s%22,%20ft_strjoin%28b,%20%2242%22%29%29%3B%0A%20%20return%200%3B%0A%7D&curInstr=95&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D