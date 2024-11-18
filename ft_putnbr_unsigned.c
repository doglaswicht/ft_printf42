/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlb <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:43:34 by dlb               #+#    #+#             */
/*   Updated: 2024/11/06 14:44:27 by dlb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Function pour ecrire un intier sans signal
int	ft_putnbr_unsigned(unsigned int n)
{
	if (n >= 10)
	{
		return (ft_putnbr_unsigned(n / 10) + ft_putchar((n % 10) + 48));
	}
	return (ft_putchar(n + 48));
}
