/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:14:46 by adakhama          #+#    #+#             */
/*   Updated: 2025/11/04 15:04:17 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int main()
{
    char *str;
    printf("ft_print : %d\n", ft_printf("%p\n", str));
    printf("printf : %d\n", printf("%p\n", str));
}