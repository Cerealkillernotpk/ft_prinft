/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:46:56 by adakhama          #+#    #+#             */
/*   Updated: 2025/11/03 17:23:56 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

size_t	ft_putchar(int c);
int     ft_printf(const char *, ...);
size_t	ft_putstr(char *s);
size_t	ft_strlen(const char *str);
size_t  ft_putbase(char *base, size_t nbr);
size_t     ft_putnbr(int n);
int     main();

#endif
