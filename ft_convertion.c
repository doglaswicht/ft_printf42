/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlb <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:47:23 by dlb               #+#    #+#             */
/*   Updated: 2024/11/18 18:02:11 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convertion(char specifier, va_list args)
{
	int	printed_chars;

	printed_chars = 0;
	if (specifier == 'c')
		printed_chars += ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		printed_chars += ft_putstr(va_arg(args, char *));
	else if (specifier == 'd' || specifier == 'i')
		printed_chars += ft_putnbr(va_arg(args, int));
	else if (specifier == 'u')
		printed_chars += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (specifier == 'x')
		printed_chars += ft_puthex(va_arg(args, unsigned int), 'x');
	else if (specifier == 'X')
		printed_chars += ft_puthex(va_arg(args, unsigned int), 'X');
	else if (specifier == 'p')
		printed_chars += ft_putptr(va_arg(args, void *));
	else if (specifier == '%')
		printed_chars += ft_putchar('%');
	return (printed_chars);
}
