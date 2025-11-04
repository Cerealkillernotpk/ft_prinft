/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:08:18 by adakhama          #+#    #+#             */
/*   Updated: 2025/11/04 15:57:32 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbpos(int nb, size_t *len)
{
	if (nb > 0)
	{
		ft_putnbpos(nb / 10, len);
		nb = nb % 10 + '0';
		*len += write(1, &nb, 1);
	}
}

void	ft_putnbr(int n, size_t *len)
{
	if (n == 0)
	{
		write(1, "0", 1);
		len++;
	}
	if (n < 0)
	{
		if (n == -2147483648)
		{
			*len += write(1, "-2147483648", 11);
		}
		else
		{
			*len += write(1, "-", 1);
			n *= -1;
		}
	}
	if (n > 0)
		ft_putnbpos(n, len);
}
