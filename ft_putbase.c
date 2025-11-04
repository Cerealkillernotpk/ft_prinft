/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:57:00 by adakhama          #+#    #+#             */
/*   Updated: 2025/11/04 14:11:09 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t    ft_putbase(char *base, size_t nbr, int verif)
{
    size_t  baselen;
    int     len ;

    baselen = ft_strlen(base);
    len = 0;
    if (verif == 0)
    {
        write(1,"0x",2);
        verif++;
    }
    if (nbr > baselen)
    {
        ft_putbase(base, nbr/baselen, verif);
    }
    len += ft_putchar(base[nbr%baselen]);
    return (len);
}