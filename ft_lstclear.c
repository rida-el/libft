/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-maza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:40:03 by rel-maza          #+#    #+#             */
/*   Updated: 2021/11/13 18:33:15 by rel-maza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cur;
	t_list *curd;

	if (lst == NULL || del == NULL)
		return ;
	cur = *lst;
	while(cur)
	{	
		curd = cur;
		del(cur->content);
		free(cur);
		cur = curd->next;
	}
	*lst = NULL;	
}
