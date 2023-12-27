/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexalow.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:19:15 by tzorai            #+#    #+#             */
/*   Updated: 2023/12/27 18:02:38 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexalow(unsigned int n)
{
	int		len;
	char	*s;

	len = 0;
	s = "0123456789abcdef";
	if (n > 15)
		len += ft_hexalow(n / 16);
	len += ft_putchar(s[n % 16]);
	return (len);
}
