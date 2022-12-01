/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexmaj.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 03:12:12 by tedelin           #+#    #+#             */
/*   Updated: 2022/11/30 03:12:12 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_puthexamaj(unsigned int nb)
{
	if (nb / 16)
		return (ft_puthexamaj(nb / 16) + ft_puthexamaj(nb % 16));
	if (nb >= 10 && nb < 16)
		ft_putchar((nb % 10) + 'A');
	if (nb < 10)
		ft_putchar((nb % 10) + '0');
	return (1);
}
