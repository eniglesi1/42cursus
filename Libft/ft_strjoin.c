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
	int		j;

	j = ft_strlen(s1) + ft_strlen(s2) + 1;
	char	aux[j];

	ft_strlcpy(aux, s1, ft_strlen(s1) + 1);
	i = ft_strlen(s2) + ft_strlen(aux) + 1;
	if (i == 0)
		return (NULL);
	a = malloc(sizeof(char) * i + 1);
	if (!a)
		return (NULL);
	ft_strlcpy(a, aux, i + 1);
	ft_strlcat(a, s2, i + 1);
	return (a);
}
