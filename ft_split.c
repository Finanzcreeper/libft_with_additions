/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:21:52 by nreher            #+#    #+#             */
/*   Updated: 2022/12/08 19:23:02 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_splitter(char *mod, char **out, char *delim)
{
	unsigned int		c;
	unsigned int		p;
	int					i;
	int					l;

	c = 0;
	i = 0;
	while (mod[c])
	{
		p = 0;
		mod = ft_strtrim(mod, delim);
		l = ft_strlen(mod);
		while (mod[c] != delim[0] && mod[c])
			c++;
		out[i] = ft_calloc(c + 1, sizeof(char));
		while (p < c)
		{
			out[i][p] = mod[p];
			p++;
		}
		i++;
		mod = ft_substr(mod, c, l);
		c = 0;
	}
	return (out);
}

static int	ft_lencnt(char *mod, char delimiter)
{
	unsigned int		c;
	int					l;

	c = 0;
	l = 0;
	while (mod[c])
	{
		while (mod[c] == delimiter && mod[c])
			c++;
		l++;
		while (mod[c] != delimiter && mod[c])
			c++;
	}
	return (l);
}

char	**ft_split(char const *a1, char delimiter)
{
	int					l;
	char				*mod;
	char				**out;
	char				delim[2];

	delim[0] = delimiter;
	delim[1] = '\0';
	mod = ft_strtrim((char *)a1, delim);
	if (a1[0] == '\0')
	{
		out = malloc(1 * sizeof(char *));
		out[0] = NULL;
		return (out);
	}
	l = ft_lencnt(mod, delimiter);
	out = malloc(l * sizeof(char *));
	if (out == NULL)
		return (NULL);
	out = ft_splitter(mod, out, delim);
	return (out);
}
