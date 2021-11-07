/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-maza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 08:40:45 by rel-maza          #+#    #+#             */
/*   Updated: 2021/11/06 09:45:08 by rel-maza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char *s;

	s = malloc(count * size);
	if (s == NULL)
		return (0);
	ft_bzero(s,count);
	return( (void *) s);
}




