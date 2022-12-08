/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:21:14 by nreher            #+#    #+#             */
/*   Updated: 2022/12/05 12:11:39 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	char	*new;

	size = 0;
	while (s[size])
		size++;
	size++;
	new = malloc(size * sizeof(char));
	ft_strlcpy(new, s, size);
	return (new);
}
