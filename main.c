/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:14:46 by adakhama          #+#    #+#             */
/*   Updated: 2025/11/04 13:44:19 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int main()
{
    int i;
    int j;

    j = printf("%x \n" ,456654);
    printf("%d \n" ,j);
    i = ft_printf("%x \n",456654);
    ft_printf("%d \n", i);
    printf("%p \n", &i);
    ft_printf("%p \n", &i);
}