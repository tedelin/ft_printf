/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pu.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:37:34 by tedelin           #+#    #+#             */
/*   Updated: 2023/02/22 15:48:06 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdlib.h>

int	ft_putunsnbr(unsigned int nb)
{
	if (nb >= 10)
		return (ft_putunsnbr(nb / 10) + ft_putunsnbr(nb % 10));
	else
		return (ft_putchar(nb + '0'));
}

int	ft_len(unsigned long p)
{
	int	len;

	len = 1;
	while (p >= 16)
	{
		p = p / 16;
		len++;
	}
	return (len);
}

int	ft_adresse(unsigned long p)
{
	int		i;
	char	*res;
	char	*base;
	int		len;

	if (!p)
		return (write(1, "(nil)", 5));
	i = ft_len(p);
	base = "0123456789abcdef";
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (0);
	res[i--] = '\0';
	while (p >= 16)
	{
		res[i--] = base[p % 16];
		p = p / 16;
	}
	res[i] = base[p % 16];
	len = ft_putstr("0x") + ft_putstr(res);
	free(res);
	return (len);
}
