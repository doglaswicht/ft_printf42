/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doglasbastos <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:00:23 by doglasbas         #+#    #+#             */
/*   Updated: 2024/10/24 15:59:58 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/* #include<stdio.h>
int main(void)
{
	const char *str = "Paralelepipedo";
	char *resultat = ft_strrchr(str, 'e');

	if (resultat != NULL)
	{
		printf(" le dernier char trouvé: %s\n", resultat);
	}
	else
	{
		printf("char not found\n");
	}
} */
