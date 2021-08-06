/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <eniglesi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 19:19:59 by eniglesi          #+#    #+#             */
/*   Updated: 2021/08/06 19:22:46 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT
#define _LIBFT

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
unsigned long	ft_strlen(const char *s);
void	ft_memset(void *ptr, int x, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
unsigned long	ft_strlcpy(char *dst, const char *src, size_t size);
unsigned long	ft_strlcat(char *dst, const char *src, size_t size);
int	ft_toupper(char c);
int	ft_tolower(char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

#include "ft_atoi.c"
#include "ft_bzero.c"
#include "ft_isalnum.c"
#include "ft_isalpha.c"
#include "ft_isascii.c"
#include "ft_isdigit.c"
#include "ft_isprint.c"
#include "ft_memchr.c"
#include "ft_memcmp.c"
#include "ft_memcpy.c"
#include "ft_memmove.c"
#include "ft_memset.c"
#include "ft_strchr.c"
#include "ft_strlcat.c"
#include "ft_strlcpy.c"
#include "ft_strlen.c"
#include "ft_strncmp.c"
#include "ft_strnstr.c"
#include "ft_strrchr.c"
#include "ft_tolower.c"
#include "ft_toupper.c"
#endif