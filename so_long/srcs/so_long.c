/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:16:51 by eniglesi          #+#    #+#             */
/*   Updated: 2022/02/21 12:16:53 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	putline(int i, int j, t_so_long sl)
{
	while (sl.mapa[i][j])
	{
		if (sl.mapa[i][j] == '1')
			mlx_put_image_to_window(sl.mlx, sl.mlx_win, sl.imgs.wl.img,
									sl.imgs.flr.img_height * j + (sl.imgs.flr.img_height / 2 - sl.imgs.wl.img_height / 2),
									sl.imgs.flr.img_width * i + (sl.imgs.flr.img_height / 2 - sl.imgs.wl.img_height / 2));
		if (sl.mapa[i][j] == 'P')
			mlx_put_image_to_window(sl.mlx, sl.mlx_win, sl.imgs.per.img,
									sl.imgs.flr.img_height * j + (sl.imgs.flr.img_height / 2 - sl.imgs.per.img_height / 2),
									sl.imgs.flr.img_width * i + (sl.imgs.flr.img_width / 2 - sl.imgs.per.img_width / 2));
		if (sl.mapa[i][j] == 'E')
			mlx_put_image_to_window(sl.mlx, sl.mlx_win, sl.imgs.exit.img,
									sl.imgs.flr.img_height * j + (sl.imgs.flr.img_height / 2 - sl.imgs.exit.img_height / 2),
									sl.imgs.flr.img_width * i + (sl.imgs.flr.img_width / 2 - sl.imgs.exit.img_width / 2));
		if (sl.mapa[i][j] == 'C')
			mlx_put_image_to_window(sl.mlx, sl.mlx_win, sl.imgs.cons.img,
									sl.imgs.flr.img_height * j + (sl.imgs.flr.img_height / 2 - sl.imgs.cons.img_height / 2),
									sl.imgs.flr.img_width * i + (sl.imgs.flr.img_width / 2 - sl.imgs.cons.img_width / 2));
		j++;
	}
}

void	dclvr(t_so_long *sl)
{
	sl->mlx = mlx_init();
	sl->imgs.per.relative_path = "../includes/images/per.png";
	sl->imgs.flr.relative_path = "../includes/images/flr.png";
	sl->imgs.wl.relative_path = "../includes/images/wall.png";
	sl->imgs.exit.relative_path = "../includes/images/Exit.png";
	sl->imgs.cons.relative_path = "../includes/images/coin_01d.png";
	sl->imgs.per.img = mlx_png_file_to_image(sl->mlx, sl->imgs.per.relative_path, &sl->imgs.per.img_width, &sl->imgs.per.img_height);
	sl->imgs.flr.img = mlx_png_file_to_image(sl->mlx, sl->imgs.flr.relative_path, &sl->imgs.flr.img_width, &sl->imgs.flr.img_height);
	sl->imgs.wl.img = mlx_png_file_to_image(sl->mlx, sl->imgs.wl.relative_path, &sl->imgs.wl.img_width, &sl->imgs.wl.img_height);
	sl->imgs.exit.img = mlx_png_file_to_image(sl->mlx, sl->imgs.exit.relative_path, &sl->imgs.exit.img_width, &sl->imgs.exit.img_height);
	sl->imgs.cons.img = mlx_png_file_to_image(sl->mlx, sl->imgs.cons.relative_path, &sl->imgs.cons.img_width, &sl->imgs.cons.img_height);
	sl->mlx_win = mlx_new_window(sl->mlx, (sl->imgs.flr.img_width * (ft_strlen(sl->mapa[0]) - 1)) + 1, (sl->imgs.flr.img_height * sl->lns) + 1, "Hello world!");
}

void	printmapa(t_so_long sl, int j, size_t i)
{
	while (j < sl.lns)
	{
		i = 0;
		while (i < ft_strlen(sl.mapa[0]) - 1)
		{
			mlx_put_image_to_window(sl.mlx, sl.mlx_win, sl.imgs.flr.img, sl.imgs.flr.img_height * i, sl.imgs.flr.img_width * j);
			i++;
		}
		j++;
	}
	i = 0;
	while (sl.mapa[i])
	{
		putline(i, 0, sl);
		i++;
	}
	ft_printf("\nNúmero de movimientos: -%i-\n", 0);
}

int	main(int argc, char **argv)
{
	t_so_long	sl;

	if (incorrect_arguments(argc, argv) != 0)
		return (1);
	sl.lns = lines(argv);
	sl.mapa = malloc(sizeof(char *) * (sl.lns + 1));
	if (so_long(argv, sl.mapa) != 0)
		return (0);
	dclvr(&sl);
	printmapa(sl, 0, 0);
	sl.moves = 0;
	mlx_key_hook(sl.mlx_win, ft_a, &sl);
	mlx_hook(sl.mlx_win, ON_DESTROY, 0, close_window, &sl);
	mlx_loop(sl.mlx);
	return (0);
}
