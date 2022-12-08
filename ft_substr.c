/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:42:12 by nreher            #+#    #+#             */
/*   Updated: 2022/12/08 18:22:41 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			c;
	unsigned int	i;

	c = 0;
	i = 0;
	sub = ft_calloc((len + 1), sizeof(char));
	if (sub == NULL)
		return (NULL);
	if ((int)start > 1 + ft_strlen((char *)s))
	{
		sub[0] = '\0';
		return (sub);
	}
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
