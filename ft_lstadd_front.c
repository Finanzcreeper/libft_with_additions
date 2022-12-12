/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:11:36 by nreher            #+#    #+#             */
/*   Updated: 2022/12/12 15:53:41 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new -> next = *lst;
		*lst = new;
	}
}

#include <stdio.h>
int main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*d;

/*	*/printf("test\n");
	d -> next = NULL;
	c -> next = d;
	b -> next = c;
	a -> next = b;
	a -> content = (int *)123;
	b -> content = "this is b";
	c -> content = "Q";
	d -> content = (int *)-5;
/*	*/printf("%d\n",a->content);
return(0);
}
