/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:43:24 by tzorai            #+#    #+#             */
/*   Updated: 2023/12/27 18:06:57 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(int c);
int		ft_putstr(const char *str);
int		ft_putptr(unsigned long n);
int		ft_putnbr(int n);
int		ft_un_putnbr(unsigned int n);
int		ft_hexalow(unsigned int n);
int		ft_hexacap(unsigned int n);

#endif