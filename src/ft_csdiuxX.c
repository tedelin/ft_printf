/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_csdiuxX.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:57:58 by tedelin           #+#    #+#             */
/*   Updated: 2023/02/22 15:32:50 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putstr(char *str)
{
	if (!str)
		return (write(1, "(null)", 6));
	return (write(1, str, ft_strlen(str)));
}

size_t	ft_puthexa(unsigned int nb, char c)
{
	if (nb / 16)
		return (ft_puthexa(nb / 16, c) + ft_puthexa(nb % 16, c));
	if (nb >= 10 && nb < 16)
		ft_putchar((nb % 10) + c);
	if (nb < 10)
		ft_putchar((nb % 10) + '0');
	return (1);
}

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
