/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-maza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:12:57 by rel-maza          #+#    #+#             */
/*   Updated: 2021/11/05 12:26:17 by rel-maza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*d;
	char	*s;
	char	*ls;
	char	*ld;

	d = dest;
	s = (char *)src;
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		ls = (char *)s + (len - 1);
		ld = d + (len - 1);
		while (len--)
			*ld-- = *ls--;
	}
	return (dest);
}
