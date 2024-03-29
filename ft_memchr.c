/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-maza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:28:17 by rel-maza          #+#    #+#             */
/*   Updated: 2021/11/10 11:05:27 by rel-maza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	ch;
	size_t			i;

	i = 0;
	src = (unsigned char *) s;
	ch = (unsigned char ) c;
	while (i < n)
	{
		if (*src == ch)
			return (src);
		src++;
		i++;
	}
	return (0);
}
