/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-maza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:29:18 by rel-maza          #+#    #+#             */
/*   Updated: 2021/11/14 11:40:05 by rel-maza         ###   ########.fr       */
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

	if (s == NULL)
		return (0);
	lenght = ft_strlen(s);
	i = 0;
	se = start;
	if (start >= lenght)
		size = 0;
	else
		size = min(lenght - start, len);
	p = malloc(sizeof(*s) * (size + 1));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s + start, size + 1);
	return (p);
}
