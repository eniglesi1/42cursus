#include "../includes/so_long.h"

int	ber(char **mapa, char *str, int option)
{
	int	i;

	i = 0;
	if (option == 1)
	{
		while (mapa[i])
		{
			free(mapa[i]);
			i++;
		}
	}
	free(mapa);
	return (ft_printf("%s", str));
}

int	incorrect_arguments(int argc, char **argv)
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
		return (ber(mapa, "\nERROR\nEl archivo es inválido\n", 0));
	mapa[0] = get_next_line(fd);
	readmap(fd, mapa);
	close(fd);
	if (mapa[0] == NULL || mapa[1] == NULL)
		return (ft_printf("\nERROR\nEl mapa es inválido\n"));
	if (mapa_is_funcional(mapa))
		return (1);
	return (0);
}
