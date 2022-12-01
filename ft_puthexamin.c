/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexamin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 03:11:55 by tedelin           #+#    #+#             */
/*   Updated: 2022/11/30 03:11:56 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_puthexamin(unsigned int nb)
{
	if (nb / 16)
		return (ft_puthexamin(nb / 16) + ft_puthexamin(nb % 16));
	if (nb >= 10 && nb < 16)
		ft_putchar((nb % 10) + 'a');
	if (nb < 10)
		ft_putchar((nb % 10) + '0');
	return (1);
}
