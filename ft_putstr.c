/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adakhama <adakhama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:52:57 by adakhama          #+#    #+#             */
/*   Updated: 2025/11/04 15:57:36 by adakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putstr(char *s, size_t *len)
{
	unsigned int	i;

	if (!s)
		return	;
	i = 0;
	while (s[i])
	{
		*len += write(1, &s[i], 1);
		i++;
	}
}
