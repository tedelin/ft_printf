/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:24:03 by tedelin           #+#    #+#             */
/*   Updated: 2022/12/01 16:24:05 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		l_hexa(int nb);
int		ft_putunsnbr(unsigned int nb);
size_t	ft_puthexamin(unsigned int nb);
size_t	ft_puthexamaj(unsigned int nb);
int		ft_adresse(unsigned long p);
int		ft_printf(const char *s, ...);

#endif
