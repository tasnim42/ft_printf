/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzorai <tzorai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:26:27 by tzorai            #+#    #+#             */
/*   Updated: 2023/12/27 18:16:02 by tzorai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkformat(const char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (c == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		len += ft_putptr(va_arg(args, unsigned long));
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		len += ft_un_putnbr(va_arg(args, unsigned int));
	else if (c == 'x')
		len += ft_hexalow(va_arg(args, unsigned int));
	else if (c == 'X')
		len += ft_hexacap(va_arg(args, unsigned int));
	else if (c == '%')
		len += ft_putchar(c);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
			len += ft_checkformat(str[++i], args);
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}

int main() {
	// Test avec quelques formats différents
	ft_printf("Bonjour, %s ! Le nombre %d est affiche en hexa : %x\n", "Utilisateur", 42, 42);

	// Test avec un pointeur
	int variable = 123;
	ft_printf("Adresse de la variable : %p\n", &variable);
}
