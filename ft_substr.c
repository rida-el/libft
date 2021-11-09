/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-maza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:29:18 by rel-maza          #+#    #+#             */
/*   Updated: 2021/11/09 18:12:49 by rel-maza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	return (a);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			lenght;
	char			*p;
	unsigned int	i;
	unsigned int	se;
	size_t			size;

	lenght = ft_strlen(s);
	i = 0;
	se = start;
	if (start >= lenght)
		size = 0;
	else
		size = min(lenght - start, len);
	p = malloc(sizeof(*s) * (size + 1));
	/*
	if ((start > lenght) || (len == 0))
	{
		p = malloc(1 * sizeof (char));
		p[i] = '\0';
		return (p);
	}
	else if (len >= (lenght - start))
	{
		p = malloc((lenght - start) * sizeof(char) + 1);
		while (i < (lenght - start))
			p[i++] = s[se++];
		p[i] = '\0';
	}
	else
	{
		p = malloc(len * sizeof(char) + 1);
		while (i < len)
			p[i++] = s[se++];
		p[i] = '\0';
	}*/
	ft_strlcpy(p, s + start, size + 1);
	return (p);
}
