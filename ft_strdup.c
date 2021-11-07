/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-maza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 09:45:36 by rel-maza          #+#    #+#             */
/*   Updated: 2021/11/06 10:05:10 by rel-maza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest,const char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
char	*ft_strdup(const char *src)
{
	char	*p;
	int		i;

	i = 0;
	p = malloc(( ft_strlen(src) + 1) * sizeof(char));
	if (p == NULL)
		return (0);
	ft_strcpy(p,src);
	return (p);
}
