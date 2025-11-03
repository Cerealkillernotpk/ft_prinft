/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:57:00 by adakhama          #+#    #+#             */
/*   Updated: 2025/11/03 16:16:43 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void    ft_putbase(char *base, size_t nbr, int len)
{
    size_t  baselen;

    baselen = ft_strlen(base);
    if (nbr > baselen)
        ft_putbase(base, nbr/baselen, len);
    ft_putchar(base[nbr%baselen], &len);
}