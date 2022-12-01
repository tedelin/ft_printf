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

static int	ft_nblen(unsigned int nb)
{
	int	len;

	len = 1;
	while (nb >= 10)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static void	ft_put(unsigned int nb)
{
	if (nb >= 10)
	{
		ft_put(nb / 10);
		ft_put(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int	ft_putunsnbr(unsigned int nb)
{
	ft_put(nb);
	return (ft_nblen(nb));
}
