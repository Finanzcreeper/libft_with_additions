/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:42:12 by nreher            #+#    #+#             */
/*   Updated: 2022/12/13 19:33:48 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*strmke(char const *s, size_t len, char *sub, unsigned int start)
{
	size_t	c;

	c = 0;
	while (c < len)
	{
		if (s[start] == '\0')
			return (sub);
		sub[c] = s[start];
		c++;
		start++;
	}
	sub[c] = '\0';
	return (sub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;

	if (s == NULL)
		return (NULL);
	if (len > (size_t)ft_strlen((char *)s))
		len = ft_strlen((char *)s);
	if (start > (unsigned int)ft_strlen((char *)s))
	{
		sub = ft_calloc(1, sizeof(char));
		return (sub);
	}
	if (start + len <= (unsigned int)ft_strlen((char *)s) + 1)
		sub = ft_calloc(((int)len + 1), sizeof(char));
	if ((int)start + (int)len > ft_strlen((char *)s) + 1)
		sub = ft_calloc((((int)start + (int)len)
					- ft_strlen((char *)s)) + 1, sizeof(char));
	if (sub == NULL)
		return (NULL);
	strmke (s, len, sub, start);
	return (sub);
}
