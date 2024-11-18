/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlb <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:45:18 by dlb               #+#    #+#             */
/*   Updated: 2024/11/10 17:00:18 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// Function pour Ecrire em Hexa
int	ft_puthex(unsigned int n, char format)
{
	const char		*hex_digits;
	int				printed_chars;

	printed_chars = 0;
	if (format == 'x')
		hex_digits = "0123456789abcdef";
	else
		hex_digits = "0123456789ABCDEF";
	if (n >= 16)
		printed_chars += ft_puthex(n / 16, format);
	printed_chars += ft_putchar(hex_digits[n % 16]);
	return (printed_chars);
}
