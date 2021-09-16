/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 00:10:33 by marvin            #+#    #+#             */
/*   Updated: 2021/09/09 00:10:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	void	*a;

	if (len > ft_strlen(s))
		len = ft_strlen(s);
	a = malloc(sizeof(char) * len);
	if (!a || start > ft_strlen(s))
		return (a);
	ft_strlcpy(a, s + start, len + 1);
	return (a);
}
