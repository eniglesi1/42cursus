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

typedef struct	s_images
{
	t_image		flr;
	t_image		per;
	t_image 	wl;
	t_image		exit;
	t_image 	cons;
}	t_images;

typedef struct	s_so_long
{
	void		*mlx;
	void		*mlx_win;
	char		**mapa;
	int			moves;
	int			lns;
	t_images	imgs;
}	t_so_long;

enum {
	ON_DESTROY = 17
};

void	readmap(int fd, char **mapa);
int		lines(char **argv);
int		mapa_is_funcional(char **mapa);
int		incorrect_arguments(int argc, char **argv);
int		so_long(char **argv, char **mapa);
int		ber(char **mapa, char *str, int option);
int		canwin(char **mapa, int i, int j);
void	win(t_so_long *sl);
void	move(t_so_long *sl, int aux_i, int aux_j, int i, int j);
int		ft_a(int keycode, t_so_long *sl);
void	putline(int i, int j, t_so_long sl);
void	dclvr(t_so_long *sl);
void	printmapa(t_so_long sl, int j, size_t i);
int		close_window(t_so_long *sl);

#endif
