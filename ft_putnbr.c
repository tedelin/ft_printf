/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 03:11:39 by tedelin           #+#    #+#             */
/*   Updated: 2022/11/30 03:11:39 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	l_nb(int nb)
{
	int				len;
	unsigned int	nbr;

	len = 1;
	if (nb < 0)
	{
		len++;
		nbr = -nb;
	}
	else
		nbr = nb;
	if (nbr > 0)
	{
		while (nbr >= 10)
		{
			nbr = nbr / 10;
			len++;
		}
	}
	return (len);
}

static void	ft_nbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar(n + 48);
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int	ft_putnbr(int n)
{
	ft_nbr(n);
	return (l_nb(n));
}
