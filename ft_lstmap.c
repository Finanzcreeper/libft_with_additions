/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 12:43:02 by nreher            #+#    #+#             */
/*   Updated: 2022/12/22 13:38:34 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	new;

	while(lst -> next)
	{
		new.content = lst -> content;
		del(lst -> content);
		lst -> next = temp -> next;
		new.next = lst -> next;
		free(lst->next);
	}
}