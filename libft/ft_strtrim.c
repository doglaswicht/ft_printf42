/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:52:36 by dleite-b          #+#    #+#             */
/*   Updated: 2024/10/24 18:56:39 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	char	*str;

	if (!s1 || !set)
	{
		return (NULL);
	}
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
	}
	end = ft_strlen(s1);
	while (end && ft_strchr(set, s1[end]))
	{
		end--;
	}
	str = ft_substr((char *)s1, 0, end + 1);
	return (str);
}
/*
int main(int argc, char **argv)
{
if (argc == 3)
{
char *reponse = ft_strtrim(argv[1], argv[2]);
printf("reponse : %s\n", reponse);
}
return (0);
}*/
