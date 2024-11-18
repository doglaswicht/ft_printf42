/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:05:58 by dleite-b          #+#    #+#             */
/*   Updated: 2024/10/23 16:12:11 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	index_s;

	index_s = 0;
	if (s != NULL && f != NULL)
	{
		while (s[index_s] != '\0')
		{
			f(index_s, &s[index_s]);
			index_s++;
		}
	}
}
