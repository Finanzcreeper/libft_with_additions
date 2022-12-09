/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:17:24 by nreher            #+#    #+#             */
/*   Updated: 2022/12/09 17:03:07 by nreher           ###   ########.fr       */
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
	int		rfrnt;
	int		rbck;
	char	*out;

	c = ft_strlen((char *)s1) - 1;
	rbck = backremover((char *)s1, (char *)set);
	rfrnt = frontremover((char *)s1, (char *)set);
	i = 0;
	out = ft_calloc((ft_strlen((char *)s1) - (rbck - rfrnt) + 1), sizeof(char));
	if (out == NULL)
		return (NULL);
	while (rfrnt <= c - rbck)
	{
		out[i] = (char)s1[rfrnt];
		rfrnt++;
		i++;
	}
	out[i] = '\0';
	return (out);
}
