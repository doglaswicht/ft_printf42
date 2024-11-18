/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlb <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:49:58 by dlb               #+#    #+#             */
/*   Updated: 2024/10/21 14:01:42 by dlb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	joined_str = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!joined_str)
		return (NULL);
	ft_memcpy(joined_str, s1, len_s1);
	ft_memcpy(joined_str + len_s1, s2, len_s2);
	joined_str[len_s1 + len_s2] = '\0';
	return (joined_str);
}
