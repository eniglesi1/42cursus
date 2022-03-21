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

static int	ber(char **mapa, char *str)
{
	free(mapa);
	return (ft_printf("%s", str));
}

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

int	so_long(char **argv, char **mapa)
{
	int		fd;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (ber(mapa, "\nERROR\nEl archivo es inválido\n"));
	mapa[0] = get_next_line(fd);
	readmap(fd, mapa);
	close(fd);
	if (mapa[0] == NULL || mapa[1] == NULL)
		return (ft_printf("\nERROR\nEl mapa es inválido\n"));
	if (mapa_is_funcional(mapa))
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	void	*mlx;
	void	*mlx_win;
	char	**mapa;
	t_image	flr;
	t_image	per;
	t_image wl;
	t_image	exit;
	t_image cons;

	mlx = mlx_init();
	if (incorrect_arguments(argc, argv) != 0)
		return (1);
	mapa = malloc(sizeof(char *) * (lines(argv) + 1));
	if (so_long(argv, mapa) != 0)
		return (0);
	per.relative_path = "./images/change/Actor/Characters/Inspector/Faceset.png";
	flr.relative_path = "./images/Sunnyland Trees Expansion Files/Sprites/Sliced Trees/flr.png";
	wl.relative_path = "./images/KRG/icons/48x48/wood_01a.png";
	exit.relative_path = "./images/change/Actor/Boss/GiantSpirit/Faceset.png";
	cons.relative_path = "./images/KRG/icons/48x48/coin_01d.png";
	per.img = mlx_png_file_to_image(mlx, per.relative_path, &per.img_width, &per.img_height);
	flr.img = mlx_png_file_to_image(mlx, flr.relative_path, &flr.img_width, &flr.img_height);
	wl.img = mlx_png_file_to_image(mlx, wl.relative_path, &wl.img_width, &wl.img_height);
	exit.img = mlx_png_file_to_image(mlx, exit.relative_path, &exit.img_width, &exit.img_height);
	cons.img = mlx_png_file_to_image(mlx, cons.relative_path, &cons.img_width, &cons.img_height);

	int	j = 0;
	size_t i = 0;
	mlx_win = mlx_new_window(mlx, (wl.img_width * (ft_strlen(mapa[0]) - 1)) + 1, (wl.img_height * lines(argv)) + 1, "Hello world!");
	while (j * flr.img_width < wl.img_width * lines(argv))
	{
		i = 0;
		while (i * flr.img_height < wl.img_height * ft_strlen(mapa[0]))
		{
			mlx_put_image_to_window(mlx, mlx_win, flr.img, flr.img_height * i, flr.img_width * j);
			i++;
		}
		j++;
	}
	i = 0;
	while (mapa[i])
	{
		j = 0;
		while (mapa[i][j])
		{
			if (mapa[i][j] == '1')
				mlx_put_image_to_window(mlx, mlx_win, wl.img, wl.img_height * j, wl.img_width * i);
			if (mapa[i][j] == 'P')
				mlx_put_image_to_window(mlx, mlx_win, per.img, wl.img_height * j, wl.img_width * i);
			if (mapa[i][j] == 'E')
				mlx_put_image_to_window(mlx, mlx_win, exit.img, wl.img_height * j, wl.img_width * i);
			if (mapa[i][j] == 'C')
				mlx_put_image_to_window(mlx, mlx_win, cons.img, wl.img_height * j, wl.img_width * i);
			j++;
		}
		i++;
	}
	mlx_loop(mlx);
	free(mapa);
	return (0);
}
