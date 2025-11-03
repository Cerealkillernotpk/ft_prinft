/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:08:18 by adakhama          #+#    #+#             */
/*   Updated: 2025/11/03 16:16:37 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbpos(int nb, int len)
{
	if (nb > 0)
	{
		ft_putnbpos(nb / 10, fd);
		nb = nb % 10 + '0';
		write(1, &nb, 1);
		len++;
	}
}

void	ft_putnbr(int n, int len)
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
}
