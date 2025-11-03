/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:46:56 by adakhama          #+#    #+#             */
/*   Updated: 2025/11/03 16:29:39 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

void	ft_putchar(char c, size_t len);
int     ft_printf(const char *, ...);
void	ft_putstr(char *s, size_t len);
size_t	ft_strlen(const char *str);
void    ft_putbase(char *base, void *str, size_t len);
void	ft_putnbr(int n, size_t len);
int     main();

#endif
