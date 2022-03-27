/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 12:43:32 by eniglesi          #+#    #+#             */
/*   Updated: 2021/08/25 12:43:39 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*a;

	a = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!a)
		return (NULL);
	ft_strlcpy(a, s, ft_strlen(s) + 1);
	return (a);
}
