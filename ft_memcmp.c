/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-maza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:07:06 by rel-maza          #+#    #+#             */
/*   Updated: 2021/11/09 15:55:06 by rel-maza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	str1 = (char *) s1;
	str2 = (char *) s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str2[i] - str1[i]);
		i++;
	}
	return (0);
}
