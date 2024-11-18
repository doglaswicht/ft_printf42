/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:00:20 by dleite-b          #+#    #+#             */
/*   Updated: 2024/10/31 13:31:03 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_putnum(char *res, unsigned int num, long int len)
{
	while (num > 0)
	{
		res[len] = (num % 10) + 48;
		num /= 10;
		len--;
	}
	return (res);
}

static int	ft_len(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len = 1;
	while (nb != 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	char	*str;
	int		i;
	long	n;

	n = nb;
	i = ft_len(n);
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	i--;
	if (n == 0)
		str[0] = 48;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str = ft_putnum(str, n, i);
	return (str);
}
