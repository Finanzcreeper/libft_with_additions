/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:17:24 by nreher            #+#    #+#             */
/*   Updated: 2022/12/08 15:36:03 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	frontremover(char *s1, char *set)
{
	int		c;
	int		i;
	int		removefront;

	removefront = 0;
	c = 0;
	i = 0;
	while (set[i])
	{
		if (s1[c] == set[i])
		{
			removefront++;
			c++;
			i = 0;
		}
		else
			i++;
	}
	return (removefront);
}

static int	backremover(char *s1, char *set)
{
	int		c;
	int		i;
	int		removeback;

	removeback = 0;
	i = 0;
	c = ft_strlen(s1) - 1;
	i = 0;
	while (set[i])
	{
		if (s1[c] == set[i])
		{
			removeback++;
			i = 0;
			c--;
		}
		else
			i++;
	}
	return (removeback);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		c;
	int		i;
	int		rfront;
	int		rback;
	char	*out;

	c = ft_strlen((char *)s1) - 1;
	rback = backremover((char *)s1, (char *)set);
	rfront = frontremover((char *)s1, (char *)set);
	i = 0;
	out = ft_calloc((ft_strlen((char *)s1) - rback - rfront + 1), sizeof(char));
	while (rfront <= c - rback)
	{
		out[i] = (char)s1[rfront];
		rfront++;
		i++;
	}
	out[i] = '\0';
	return (out);
}
