/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-maza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:06:51 by rel-maza          #+#    #+#             */
/*   Updated: 2021/11/18 10:12:15 by rel-maza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < dstsize && *dst)
	{
		dst++;
		i++;
	}
	if (i == dstsize)
		return (i + ft_strlen(src));
	j = 0;
	while (src[j])
	{
		if (j < dstsize - i - 1)
			*dst ++ = src[j];
		j++;
	}
	*dst = 0;
	return (i + j);
}
