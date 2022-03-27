/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapa_is_funcional.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:38:19 by eniglesi          #+#    #+#             */
/*   Updated: 2022/02/25 11:38:22 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static int	cantidad_chars(char **mapa, int c, int e, int p)
{
	size_t	n;
	int		i;

	i = 0;
	n = 0;
	while (mapa[i + 1])
		i++;
	while (i >= 0)
	{
		n = 0;
		while (n <= ft_strlen(mapa[0]) - 2)
		{
			if (mapa[i][n] == 'E')
				e++;
			if (mapa[i][n] == 'P')
				p++;
			if (mapa[i][n] == 'C')
				c++;
			n++;
		}
		i--;
	}
	if (p != 1 || e < 1 || c < 1)
		return (ft_printf("\nERROR\nLa cantidad de E, P y/o C es incorrecta\n"));
	return (0);
}

static int	incorrect_chars(char **mapa, int i, size_t n)
{
	while (mapa[i + 1])
		i++;
	while (i >= 0)
	{
		n = 0;
		while (n <= ft_strlen(mapa[0]) - 2)
		{
			if (mapa[i][n] != '0' && mapa[i][n] != '1' && mapa[i][n] != 'E'
				&& mapa[i][n] != 'P' && mapa[i][n] != 'C')
				return (ft_printf("\nERROR\nCaracteres incorrectos en el mapa\n"));
			n++;
		}
		i--;
	}
	return (0);
}

static int	size_line(char **mapa, int i, size_t n)
{
	while (mapa[i])
	{
		n = 0;
		while (mapa[i][n])
			n++;
		if (n != ft_strlen(mapa[1]))
			return (ft_printf("\nERROR\nDiferente tamaño de líneas del mapa\n"));
		i++;
	}
	return (0);
}

static int	bordes(char **mapa, int i, size_t n, int filas)
{
	while (mapa[filas])
		filas++;
	while (mapa[0][n] == '1' && mapa[filas - 1][n] == '1')
		n++;
	if (n != ft_strlen(mapa[0]) - 1)
		return (ft_printf("\nERROR\nEl mapa no está bordeado correctamente\n"));
	i = 0;
	while (mapa[i][0] == '1' && mapa[i][n - 1] == '1' && mapa[i + 1])
		i++;
	if (i != filas - 1)
		return (ft_printf("\nERROR\nEl mapa no está bordeado correctamente\n"));
	return (0);
}

int	mapa_is_funcional(char **mapa)
{
	if (size_line(mapa, 0, 0) != 0)
		return (1);
	if (bordes(mapa, 0, 0, 0) != 0)
		return (1);
	if (incorrect_chars(mapa, 0, 0) != 0)
		return (1);
	if (cantidad_chars(mapa, 0, 0, 0) != 0)
		return (1);
	return (0);
}
