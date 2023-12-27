/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_un_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:16:05 by tzorai            #+#    #+#             */
/*   Updated: 2023/12/27 18:00:56 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_un_putnbr(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
		len += ft_un_putnbr(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}
