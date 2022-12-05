/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 03:11:39 by tedelin           #+#    #+#             */
/*   Updated: 2022/12/05 11:17:23 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putnbr(int n)
{
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	else if (n < 0)
		return (ft_putchar('-') + ft_putnbr(-n));
	else if (n >= 0 && n <= 9)
		return (ft_putchar(n + 48));
	else
		return (ft_putnbr(n / 10) + ft_putnbr(n % 10));
}
