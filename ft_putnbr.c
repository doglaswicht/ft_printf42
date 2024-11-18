/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlb <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:38:37 by dlb               #+#    #+#             */
/*   Updated: 2024/11/06 14:42:30 by dlb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// Function pour ecrire un nombre entier
int	ft_putnbr(int n)
{
	int	printed_chars;

	printed_chars = 0;
	if (n == -2147483648)
	{
		return (ft_putstr("-2147483648"));
	}
	if (n < 0)
	{
		printed_chars += ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		printed_chars += ft_putnbr(n / 10);
	}
	printed_chars += ft_putchar((n % 10) + 48);
	return (printed_chars);
}
