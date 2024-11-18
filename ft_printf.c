/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:26:41 by dleite-b          #+#    #+#             */
/*   Updated: 2024/11/18 18:26:45 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed_chars;
	int		i;

	printed_chars = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			printed_chars += ft_convertion(format[i], args);
		}
		else
			printed_chars += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (printed_chars);
}
