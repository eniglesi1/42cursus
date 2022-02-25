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

int	so_long(int argc, char **argv)
{
	char	**mapa;
	int		fd;

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

static void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bpp / 8));
	*(unsigned int*)dst = color;
}

int	main(/*int argc, char **argv*/)
{
	void	*mlx;
	void	*mlx_win;
	t_data	img;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
	img.img = mlx_new_image(mlx, 1920, 2000);

	img.addr = mlx_get_data_addr(img.img, &img.bpp, &img.line_length, &img.endian);
	int	j = 0;
	int i = 0;
	while (j <= 1920)
	{
		i = 0;
		while (i <= 1080)
		{
			my_mlx_pixel_put(&img, j, i, 0x00FFFF00);
			i++;
		}
		j++;
	}
	/*
	 my_mlx_pixel_put(&img, 5, 5, 0x00FFFF00);
	my_mlx_pixel_put(&img, 5, 6, 0x00FFFF00);
	my_mlx_pixel_put(&img, 5, 7, 0x00FFFF00);
	my_mlx_pixel_put(&img, 5, 8, 0x00FFFF00);
	my_mlx_pixel_put(&img, 6, 5, 0x00FFFF00);
	my_mlx_pixel_put(&img, 7, 5, 0x00FFFF00);
	my_mlx_pixel_put(&img, 8, 5, 0x00FFFF00);
	my_mlx_pixel_put(&img, 8, 6, 0x00FFFF00);
	my_mlx_pixel_put(&img, 8, 7, 0x00FFFF00);
	my_mlx_pixel_put(&img, 8, 8, 0x00FFFF00);
	my_mlx_pixel_put(&img, 6, 8, 0x00FFFF00);
	my_mlx_pixel_put(&img, 7, 8, 0x00FFFF00);
	my_mlx_pixel_put(&img, 8, 8, 0x00FFFF00);
	
	my_mlx_pixel_put(&img, 6, 6, 0x00FFFF00);
	my_mlx_pixel_put(&img, 6, 7, 0x00FFFF00);
	my_mlx_pixel_put(&img, 7, 6, 0x00FFFF00);
	my_mlx_pixel_put(&img, 7, 7, 0x00FFFF00);

	my_mlx_pixel_put(&img, 5, 9, 0x00FFFF00);
	my_mlx_pixel_put(&img, 6, 9, 0x00FFFF00);
	my_mlx_pixel_put(&img, 7, 9, 0x00FFFF00);
	my_mlx_pixel_put(&img, 8, 9, 0x00FFFF00);
	my_mlx_pixel_put(&img, 9, 9, 0x00FFFF00);
	my_mlx_pixel_put(&img, 9, 5, 0x00FFFF00);
	my_mlx_pixel_put(&img, 9, 6, 0x00FFFF00);
	my_mlx_pixel_put(&img, 9, 7, 0x00FFFF00);
	my_mlx_pixel_put(&img, 9, 8, 0x00FFFF00);
	
	my_mlx_pixel_put(&img, 5, 10, 0x00FFFF00);
	my_mlx_pixel_put(&img, 6, 10, 0x00FFFF00);
	my_mlx_pixel_put(&img, 7, 10, 0x00FFFF00);
	my_mlx_pixel_put(&img, 8, 10, 0x00FFFF00);
	my_mlx_pixel_put(&img, 9, 10, 0x00FFFF00);
	my_mlx_pixel_put(&img, 10, 10, 0x00FFFF00);
	my_mlx_pixel_put(&img, 10, 5, 0x00FFFF00);
	my_mlx_pixel_put(&img, 10, 6, 0x00FFFF00);
	my_mlx_pixel_put(&img, 10, 7, 0x00FFFF00);
	my_mlx_pixel_put(&img, 10, 8, 0x00FFFF00);
	my_mlx_pixel_put(&img, 10, 9, 0x00FFFF00);
	
	my_mlx_pixel_put(&img, 5, 11, 0x00FFFF00);
	my_mlx_pixel_put(&img, 6, 11, 0x00FFFF00);
	my_mlx_pixel_put(&img, 7, 11, 0x00FFFF00);
	my_mlx_pixel_put(&img, 8, 11, 0x00FFFF00);
	my_mlx_pixel_put(&img, 9, 11, 0x00FFFF00);
	my_mlx_pixel_put(&img, 10, 11, 0x00FFFF00);
	my_mlx_pixel_put(&img, 11, 5, 0x00FFFF00);
	my_mlx_pixel_put(&img, 11, 6, 0x00FFFF00);
	my_mlx_pixel_put(&img, 11, 7, 0x00FFFF00);
	my_mlx_pixel_put(&img, 11, 8, 0x00FFFF00);
	my_mlx_pixel_put(&img, 11, 9, 0x00FFFF00);
	my_mlx_pixel_put(&img, 11, 10, 0x00FFFF00);
	my_mlx_pixel_put(&img, 11, 11, 0x00FFFF00);*/
	
	
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
	return (0);
}
