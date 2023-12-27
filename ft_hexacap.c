/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexacap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:21:44 by tzorai            #+#    #+#             */
/*   Updated: 2023/12/27 18:02:31 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexacap(unsigned int n)
{
	int		len;
	char	*s;

	len = 0;
	s = "0123456789ABCDEF";
	if (n > 15)
		len += ft_hexacap(n / 16);
	len += ft_putchar(s[n % 16]);
	return (len);
}
