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
# include "./mlx/mlx.h"

typedef struct	s_data
{
	void	*img;
	char	*addr;
	int		bpp;
	int		line_length;
	int		endian;
}	t_data;

typedef struct	s_image
{
	void	*mlx;
	void	*img;
	char	*relative_path;
	int		img_width;
	int		img_height;
}	t_image;

void	readmap(int fd, char **mapa);
int		lines(char **argv);
int		mapa_is_funcional(char **mapa);

#endif
