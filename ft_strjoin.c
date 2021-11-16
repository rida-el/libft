/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-maza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:28:48 by rel-maza          #+#    #+#             */
/*   Updated: 2021/11/14 11:31:32 by rel-maza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	return (i);
}

static char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	d;

	d = ft_count(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;

	if (s1 == NULL || s2 == NULL)
		return (0);
	p = malloc((ft_count((char *) s1) + ft_count((char *) s2)) * sizeof(char));
	if (!p)
		return (NULL);
	*p = 0;
	ft_strcat(p, (char *) s1);
	ft_strcat(p, (char *) s2);
	return (p);
}
