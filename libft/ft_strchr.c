/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:34:55 by dleite-b          #+#    #+#             */
/*   Updated: 2024/10/24 17:21:33 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	uc;

	i = 0;
	uc = c;
	while (s[i] != '\0')
	{
		if (s[i] == (char)uc)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (uc == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
/* #include<stdio.h>
int main(void)
{
	const char *text = "tentei mas nao consegui";
	char *resultat = ft_strchr(text,'c');
	printf("%s\n", text);
	if (text != NULL)
	{
		printf("char found: %s\n", resultat);
	}
	else
	{
		printf("char dont foud");
	}
} */
