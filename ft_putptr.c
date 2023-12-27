/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:25:09 by tzorai            #+#    #+#             */
/*   Updated: 2023/12/27 18:00:42 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadec(unsigned long n)
{
	int		len;
	char	*s;

	s = "0123456789abcdef";
	len = 0;
	if (n > 15)
		len += ft_hexadec(n / 16);
	len += ft_putchar(s[n % 16]);
	return (len);
}

int	ft_putptr(unsigned long n)
{
	int	len;

	len = ft_putstr("0x");
	if (n == 0)
		len += ft_putchar('0');
	else
		len += ft_hexadec(n);
	return (len);
}
