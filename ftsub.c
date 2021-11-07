/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftsub.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-maza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:53:50 by rel-maza          #+#    #+#             */
/*   Updated: 2021/11/07 11:55:28 by rel-maza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{

	char *p;
	unsigned int i;
	unsigned int j;
	unsigned int a;

	i = 0;
	j = start + len;
	a = start;
	while(s[a] && a < j)
	{
		i++;
		a++;
	}
	if (len == 0)
		return (0);
	p = malloc ((i + 1)  * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	ft_memcpy(p,s);
	p[i] = '\0';
	return (p);
}
