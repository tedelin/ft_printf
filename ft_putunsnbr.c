/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 03:58:43 by tedelin           #+#    #+#             */
/*   Updated: 2022/11/30 03:58:46 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putunsnbr(unsigned int nb)
{
	if (nb >= 10)
		return (ft_putunsnbr(nb / 10) + ft_putunsnbr(nb % 10));
	else
		return (ft_putchar(nb + '0'));
}
