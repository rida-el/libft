/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-maza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:28:42 by rel-maza          #+#    #+#             */
/*   Updated: 2021/11/13 15:04:13 by rel-maza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list	*cur;

	cur = NULL;
	if (lst)
	{
		cur = lst;
		while (cur->next)
			cur = cur->next;	
	}	
	return(cur);
}
