/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:14:46 by adakhama          #+#    #+#             */
/*   Updated: 2025/11/04 14:15:23 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int main()
{
    int i;
    int j;
    int k;
    int l;

    j = printf("%x \n" ,456654);
    l = printf("%d \n" ,j);
    printf("%d \n", l);
    i = ft_printf("%x \n",456654);
    k = ft_printf("%d \n", i);
    ft_printf("%d \n", k);
    ft_printf("%p \n", &i);
}