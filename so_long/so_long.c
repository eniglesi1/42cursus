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

int	main(int argc, char **argv)
{
	char	**mapa;
	int		i;
	int		fd;

	fd = open(argv[1], O_RDONLY);
	if (argc != 2)
		return (ft_printf("\nERROR\nNúmero de argumentos inválido\n"));
	mapa = malloc(sizeof(char *) * 2);
	mapa[0] = get_next_line(fd);
	mapa[1] = NULL;
	i = readmap(fd, mapa);
	if (mapa[0] == NULL)
		return (ft_printf("\nERROR\nFile inválido\n"));
	close(fd);
	return (0);
}
