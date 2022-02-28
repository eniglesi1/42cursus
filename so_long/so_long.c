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

/*	argc >= 1(program name)
argv[0] = program name*/
#include "so_long.h"

static int	incorrect_arguments(int argc, char **argv)
{
	int		i;

	if (argc != 2)
		return (ft_printf("\nERROR\nNúmero de argumentos inválido\n"));
	i = ft_strlen(argv[1]);
	if (argv[1][i - 4] != '.' || argv[1][i - 3] != 'b' || argv[1][i - 2] != 'e'
		|| argv[1][i - 1] != 'r')
		return (ft_printf("\nERROR\nExtensión de mapa inválida. (\".ber\")\n"));
	return (0);
}

int	so_long(int argc, char **argv, char **mapa)
{
//	char	**mapa;
	int		fd;

	free (mapa);
	if (incorrect_arguments(argc, argv) != 0)
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (ft_printf("\nERROR\nEl mapa es inválido\n"));
	mapa = malloc(sizeof(char) * baits(argv) + 1);
	mapa[0] = get_next_line(fd);
	mapa[1] = NULL;
	readmap(fd, mapa);
	close(fd);
	if (mapa[0] == NULL)
		return (ft_printf("\nERROR\nEl mapa es inválido\n"));
	if (mapa_is_funcional(mapa))
		return (0);
	return (0);
}
/*
static void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bpp / 8));
	*(unsigned int*)dst = color;
}
*/
int	main(int argc, char **argv)
{
	void	*mlx;
	void	*mlx_win;
	char	**mapa;
	t_image	flr;
	t_image	per;
	t_image wl;

	mlx = mlx_init();
	//img.img = mlx_new_image(mlx, 1920, 2000);
	mapa = malloc(1);
	if (so_long(argc, argv, mapa))
		return (0);
	per.relative_path = "./images/images/Actor/Characters/Inspector/Faceset.png";
	flr.relative_path = "./images/images/rabbit/tileset_3x1.png";
	wl.relative_path = "./images/KRG/icons/48x48/wood_01a.png";
	per.img = mlx_png_file_to_image(mlx, per.relative_path, &per.img_width, &per.img_height);
	flr.img = mlx_png_file_to_image(mlx, flr.relative_path, &flr.img_width, &flr.img_height);
	wl.img = mlx_png_file_to_image(mlx, wl.relative_path, &wl.img_width, &wl.img_height);

	//img.addr = mlx_get_data_addr(img.img, &img.bpp, &img.line_length, &img.endian);
	int	j = 0;
	int i = 0;
	mlx_win = mlx_new_window(mlx, (wl.img_width * 30) + 1, (wl.img_height * 15) + 1, "Hello world!");
//	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	while (j <= 29)
	{
		i = 0;
		while (i <= 14)
		{
			//my_mlx_pixel_put(&img, j, i, 0x0000FF00);
			mlx_put_image_to_window(mlx, mlx_win, flr.img, flr.img_height * i, flr.img_width * j);
			i++;
		}
		j++;
	}
	i = 0;
	while (i <= 30)
	{
		mlx_put_image_to_window(mlx, mlx_win, wl.img, wl.img_height * i, 0);
		i++;
	}
	i = 0;
	while (i <= 30)
	{
		mlx_put_image_to_window(mlx, mlx_win, wl.img, wl.img_height * i, wl.img_width * 14);
		i++;
	}
	i = 0;
	while (i <= 15)
	{
		mlx_put_image_to_window(mlx, mlx_win, wl.img, 0, wl.img_width * i);
		i++;
	}
	i = 0;
	while (i <= 15)
	{
		mlx_put_image_to_window(mlx, mlx_win, wl.img, wl.img_height * 29, wl.img_width * i);
		i++;
	}
	mlx_put_image_to_window(mlx, mlx_win, per.img, 100, 100);
	mlx_loop(mlx);
	return (0);
}
