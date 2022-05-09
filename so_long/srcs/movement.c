/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 09:34:45 by eniglesi          #+#    #+#             */
/*   Updated: 2022/05/03 09:35:01 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	canwin(char **mapa, int i, int j)
{
	while (mapa[i])
	{
		j = 0;
		while (mapa[i][j])
		{
			if (mapa[i][j] == 'C')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	close_window(t_so_long *sl)
{
	mlx_destroy_window(sl->mlx, sl->mlx_win);
	ber(sl->mapa, "", 1);
	exit(0);
}

void	win(t_so_long *sl)
{
	mlx_destroy_window(sl->mlx, sl->mlx_win);
	ber(sl->mapa, "\n¡¡Felicidades, has ganado!!\n", 1);
	exit(0);
}

void	move(t_so_long *sl, int aux_i, int aux_j, int i)
{
	int	j;

	j = 0;
	while (sl->mapa[i])
	{
		j = 0;
		while (sl->mapa[i][j] && sl->mapa[i][j] != 'P')
			j++;
		if (sl->mapa[i][j] == 'P')
			break ;
		i++;
	}
	if (sl->mapa[i + aux_i][j + aux_j] == '0' ||
		sl->mapa[i + aux_i][j + aux_j] == 'C')
	{
		sl->moves++;
		sl->mapa[i + aux_i][j + aux_j] = 'P';
		sl->mapa[i][j] = '0';
		putline(i + aux_i, 0, *sl);
		mlx_put_image_to_window(sl->mlx, sl->mlx_win, sl->imgs.flr.img,
			sl->imgs.flr.h * j, sl->imgs.flr.w * i);
		ft_printf("-%i-\n", sl->moves);
	}
	else if (sl->mapa[i + aux_i][j + aux_j] == 'E' && canwin(sl->mapa, 0, 0))
		win(sl);
}

int	ft_a(int keycode, t_so_long *sl)
{
	if (keycode == 13 || keycode == 126)
		move(sl, -1, 0, 0);
	if (keycode == 0 || keycode == 123)
		move(sl, 0, -1, 0);
	if (keycode == 1 || keycode == 125)
		move(sl, 1, 0, 0);
	if (keycode == 2 || keycode == 124)
		move(sl, 0, 1, 0);
	if (keycode == 53)
	{
		mlx_destroy_window(sl->mlx, sl->mlx_win);
		ber(sl->mapa, "", 1);
		exit(0);
	}
	return (0);
}
