/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:51:29 by nreher            #+#    #+#             */
/*   Updated: 2022/12/08 21:29:13 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_numtochr(int n, int c, int rev)
{
	int		num;
	char	*out;

	num = n;
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	out = ft_calloc((c + 1), sizeof(char));
	if (out == NULL)
		return (NULL);
	while (num > 0)
	{
		out[c - 1] = (num % 10) + '0';
		num = num / 10;
		c--;
	}
	if (rev == 1)
		out[c - 1] = '-';
	return (out);
}

char	*ft_itoa(int n)
{
	int		c;
	int		rev;
	char	*out;

	rev = 0;
	c = 0;
	if (n < 0)
	{
		n = n * -1;
		c++;
		rev++;
	}
	if (n == 0)
	{
		out = ft_calloc(2, sizeof(char));
		if (out == NULL)
			return (NULL);
		out[0] = '0';
		return (out);
	}
	out = ft_numtochr(n, c, rev);
	return (out);
}
