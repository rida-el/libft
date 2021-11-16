/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-maza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 15:39:44 by rel-maza          #+#    #+#             */
/*   Updated: 2021/11/15 07:55:43 by rel-maza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst1;
	t_list	*lst2;

	if (!lst)
		return (NULL);
	lst1 = ft_lstnew(f(lst->content));
	lst2 = lst1;
	while (lst->next)
	{
		lst = lst->next;
		lst2->next = ft_lstnew(f(lst->content));
		if (!(lst2->next))
		{
			ft_lstclear(&lst1, del);
			free(lst1);
			return (NULL);
		}
		lst2 = lst2->next;
	}
	return (lst1);
}
