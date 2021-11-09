/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-maza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:32:54 by rel-maza          #+#    #+#             */
/*   Updated: 2021/11/09 17:25:38 by rel-maza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;
	size_t	j;

	i = 0;
	end = 0;
	while (s1[i])
	{
		if (ft_check(set, s1[i]) == 1)
			i++;
		else
			break ;
	}
	j = ft_strlen(s1) - 1;
	while (j > 0)
	{
		if (ft_check(set, s1[j]) == 1)
			j--;
		else
		{
			end = j + 1;
			break ;
		}
	}
	return (ft_substr(s1, i, end - i));
}
