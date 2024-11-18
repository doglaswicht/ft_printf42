/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:43:50 by dleite-b          #+#    #+#             */
/*   Updated: 2024/10/23 20:48:29 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	nombre;

	nombre = n;
	if (nombre < 0)
	{
		write(fd, "-", 1);
		nombre = -nombre;
	}
	if (nombre >= 10)
	{
		ft_putnbr_fd(nombre / 10, fd);
	}
	c = (nombre % 10) + 48;
	write(fd, &c, 1);
}
/* int main(void)
{
	ft_putnbr_fd(250, 1);
	return (0);
}*/
