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

	i = ft_strlen(argv[1]);
	if (argc != 2)
		return (ft_printf("\nERROR\nNúmero de argumentos inválido\n"));
	if (argv[1][i - 4] != '.' || argv[1][i - 3] != 'b' || argv[1][i - 2] != 'e'
		|| argv[1][i - 1] != 'r')
		return (ft_printf("\nERROR\nExtensión de mapa inválida. (\".ber\")\n"));
	return (0);
}

int	main(int argc, char **argv)
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
