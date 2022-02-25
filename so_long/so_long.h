/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:06:41 by eniglesi          #+#    #+#             */
/*   Updated: 2022/02/21 18:06:43 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include "./printf/ft_printf.h"
# include <fcntl.h>

void	readmap(int fd, char **mapa);
int		baits(char **argv);
int		mapa_is_funcional(char **mapa);

#endif
