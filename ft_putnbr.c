/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:08:18 by adakhama          #+#    #+#             */
/*   Updated: 2025/11/03 17:25:16 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbpos(int nb, size_t *len)
{
	if (nb > 0)
	{
		ft_putnbpos(nb / 10, len);
		nb = nb % 10 + '0';
		write(1, &nb, 1);
		len++;
	}
}

size_t	ft_putnbr(int n)
{
	size_t len;

	len = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		len++;
	}
	if (n < 0)
	{
		if (n == -2147483648)
		{
			write(1, "-2147483648", 11);
			len += 11;
		}
		else
		{
			write(1, "-", 1);
			n *= -1;
			len++;
		}
	}
	if (n > 0)
		ft_putnbpos(n, &len);
	return (len);
}
