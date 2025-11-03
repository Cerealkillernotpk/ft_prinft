/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 00:35:24 by marvin            #+#    #+#             */
/*   Updated: 2025/11/03 16:10:31 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_percent(char c, int i)
{
	ft_putchar_fd(c, 1);
	i += 2;
}
static void	ft_convertions(char c, va_list list, size_t len, int i)
{
	if (c == 'c')
		ft_putchar(va_arg(list, char), &len);
	else if (c == 's')
		ft_putstr(va_arg(list, char *), &len);
	else if (c == 'p')
		
	else if (c == 'd')
		ft_putnbr(va_arg(list, int), &len)
	else if (c == 'i')
		ft_putnbr(va_arg(list, int), &len)
	else if (c == 'u')
		ft_putnbr(va_arg(list, unsigned int), &len)
	else if (c == 'x')
		ft_putbase("0123456789abcdef", va_arg(list, size_t), &len);
	else if (c == 'X')
		ft_putbase("0123456789ABCDEF", va_arg(list, size_t), &len);
	else if (c == '%')
		ft_putchar(c, &len);
}

int ft_printf(const char *str, ...)
{
	size_t i;
	int	len;
	va_list list;

	i = 0;
	len = 0;
	va_start(list, str);
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar(str[i], &len);
			i++;
		}
		else
		{
			ft_convertions(str[i + 1], list, &len);
			i++;
		}
	}
	va_end(list);
	return (len);
}
