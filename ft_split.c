/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:21:52 by nreher            #+#    #+#             */
/*   Updated: 2022/12/08 12:55:13 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_split(char const *a1, char delim)
{
	int		c;
	int		i;
	int		l;
	char	**out

	c = 0;
	i = 0;
	l = 0;
	ft_strtrim(a1,c);
	while(a1[c])
	{
		while(a1[c] == delim && a1[c])
			c++;
		l++;
		while(a1[c] != delim && a1[c])
			c++;
	}
	out = malloc(l)
	c = 0;
	while(a1[c] != c)
	{
		c++;
	}


}

int	main()
{
	char	*s;
	char	c;
	char	**out;
	int		i;
	int		d;

	s = "    lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ";
	c = ' ';
	i = 0;
	d = 0;
	out = ft_split(s,c);
	while(i < 13)
	{
		printf("%c",out[i][d]);
		d++;
		if (out[i][d] == '\0')
		{
			i++;
			d = 0;
			printf("\n\n");
		}
	}
	return(0);
}
