/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 00:35:24 by marvin            #+#    #+#             */
/*   Updated: 2025/11/02 00:35:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_convertions(char c, )
{
	int i;
	i = 0;

	if (c == 'c')

		else if (c == 's')

			else if (c == 'p')

				else if (c == 'd')

					else if (c == 'i')

						else if (c == 'u')

							else if (c == 'x')

								else if (c == 'X')

									if (c == '%')
		{
			ft_putchar_fd(c, 1);
			i += 2;
		}
	return (i)
}

int ft_printf(const char *str, ...)
{
	size_t i;
	size_t j;
	va_list args;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar_fd(str[i], 1);
			i++;
		}
		else
		{
			j = ft_convertions(str[i + 1], );
			i += j;
		}
	}
}
