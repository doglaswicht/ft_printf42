/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlb <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:54:41 by dlb               #+#    #+#             */
/*   Updated: 2024/11/11 09:12:32 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Function pour ecrire une string
int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}
