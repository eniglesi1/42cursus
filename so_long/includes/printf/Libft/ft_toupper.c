/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <eniglesi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:48:33 by eniglesi          #+#    #+#             */
/*   Updated: 2021/08/06 19:26:03 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(char c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	else
		return (c);
}
/*#include <stdio.h>

int	ft_printf(const char *a, ...);

int main()
{
//	char test;
	ft_printf("bonjour\n");
    ft_printf("char:                    %c\n", 'r');
    ft_printf("string:                  %s\n", "bonjour");
    ft_printf("pointer:                 %p\n", "NULL");
    ft_printf("int:                     %d or %i\n", 45, 54);
    ft_printf("uint:                    %u\n", 1 << 31);
    ft_printf("hex lower:               %x\n", 0x0);
    ft_printf("hex upper:               %X\n", 0x0);
    ft_printf("percent:                 %%\n");
	ft_printf("multiple stuff:          %d %u %d %x %d\n", 1, -2, 3, 0xa, 5);
	ft_printf("bonjour\n");
	printf("char:                    %c\n", 'r');
	printf("string:                  %s\n", "bonjour");
	printf("pointer:                 %p\n", "NULL");
	printf("int:                     %d or %i\n", 45, 54);
	printf("uint:                    %u\n", 1 << 31);
	printf("hex lower:               %x\n", 0x0);
	printf("hex upper:               %X\n", 0x0);
	printf("percent:                 %%\n");
	printf("multiple stuff:          %d %u %d %x %d\n", 1, -2, 3, 0xa, 5);
}
*/
