/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:24:03 by tedelin           #+#    #+#             */
/*   Updated: 2023/02/22 15:10:26 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

int		ft_adresse(unsigned long p);
int		ft_putchar(char c);
size_t	ft_puthexa(unsigned int nb, char c);
int		ft_putnbr(int n);
int		ft_putstr(char *str);
int		ft_putunsnbr(unsigned int nb);
int		ft_printf(const char *s, ...);

#endif
