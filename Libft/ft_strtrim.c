/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 23:07:42 by marvin            #+#    #+#             */
/*   Updated: 2021/09/10 23:07:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	int		i;
	int		aux;
	int		aux2;

	aux = ft_strlen(s1);
	aux2 = ft_strlen(set);
	i = 0;
	a = malloc(sizeof(char) * aux2);
	if (!a)
		return (NULL);
	//juliadf
	ft_strlcpy(a, s1, aux);
	while (*s1 == set[i] && s1)
		s1++;
	return (a);
}