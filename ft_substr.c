/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-maza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:29:18 by rel-maza          #+#    #+#             */
/*   Updated: 2021/11/07 16:30:27 by rel-maza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t lenght;
	char *p;
	unsigned int i;
	unsigned int se;

	lenght = ft_strlen(s);	
	i = 0;
	p = 0;
	se = start;
	if((start > lenght) || (len == 0))
	{
		p = malloc(1 * sizeof (char));
		p[i] = '\0';
		return (p);
	}
	else
	{
		p = malloc((lenght - start) * sizeof(char) + 1);
		while(i < (lenght - start) + 1)
		{
			p[i] = s[se];
			i++;
			se++;
		}
		p[i] = '\0';
	}
	return (p);
}
