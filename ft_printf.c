/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 00:35:24 by marvin            #+#    #+#             */
/*   Updated: 2025/11/03 17:22:39 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static size_t	ft_convertions(char c, va_list list)
{
	size_t len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(list, int));
	else if (c == 's')
		len += ft_putstr(va_arg(list, char *));
	// else if (c == 'p')
	else if (c == 'd')
		len += ft_putnbr(va_arg(list, int));
	else if (c == 'i')
		len += ft_putnbr(va_arg(list, int));
	else if (c == 'u')
		len += ft_putnbr(va_arg(list, unsigned int));
	else if (c == 'x')
		len += ft_putbase("0123456789abcdef", va_arg(list, size_t));
	else if (c == 'X')
		len += ft_putbase("0123456789ABCDEF", va_arg(list, size_t));
	else if (c == '%')
		len += ft_putchar(c);
	return (len);
}

int ft_printf(const char *str, ...)
{
	size_t	i;
	size_t	len;
	va_list list;

	i = 0;
	len = 0;
	va_start(list, str);
	while (str[i])
	{
		if (str[i] != '%')
		{
			len += ft_putchar(str[i]);
			i++;
		}
		else
		{
			len += ft_convertions(str[i + 1], list);
			i += 2;
		}
	}
	va_end(list);
	return (len);
}
