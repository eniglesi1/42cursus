/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:56:32 by marvin            #+#    #+#             */
/*   Updated: 2021/09/09 10:34:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{	//declaración de variables
	int			c;
	int			n = 50;
	char		string[76] = "hola, que tal estás?";
	char		*string2;
	//asignación de variables
	c = 53;
	c = c + n;
	string2 = substr(string, 3, 20);											//almacena strdup de string, 3, 20 en string2 
	printf("before = %s, %d\n", string2, c);									//imprime en pantalla el valor de string2 y de c
	printf("%s !\n%s !\n", ft_substr(string, 7, 20), substr(string, 7, 20));	//imprime el valor de ft_substr de string, 7, 20 y el de strdup de string, 7, 20
	string2 = ft_substr(string, 3, 20);											//almacena ft_substr de string, 3, 20 en string2
	printf("after  = %s\n", string2);											//imprime el nuevo valor de string2
}
