/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlb <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:22:09 by dlb               #+#    #+#             */
/*   Updated: 2024/11/18 18:24:10 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Function pour unsiged long puthex
int	ft_puthexul(unsigned long n, char format)
{
	const char	*hexdigits;
	int			printed_chars;

	printed_chars = 0;
	if (format == 'x')
		hexdigits = "0123456789abcdef";
	else
		hexdigits = "0123456789ABCDEF";
	if (n >= 16)
		printed_chars += ft_puthexul(n / 16, format);
	printed_chars += ft_putchar(hexdigits[n % 16]);
	return (printed_chars);
}

// Function pour ecrire un ponteur
int	ft_putptr(void *ptr)
{
	unsigned long	adrr;
	int				printed_chars;

	adrr = (unsigned long )ptr;
	printed_chars = 0;
	printed_chars += ft_putstr("0x");
	if (ptr == 0)
	{
		printed_chars += ft_putchar(48);
		return (printed_chars);
	}
	else
		printed_chars += ft_puthexul(adrr, 'x');
	return (printed_chars);
}
