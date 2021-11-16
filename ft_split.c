/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-maza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:19:02 by rel-maza          #+#    #+#             */
/*   Updated: 2021/11/15 14:48:35 by rel-maza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_split(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && c != s[i])
			i++;
		if (c == 0)
		{
			count++;
			break ;
		}
		while (c == s[i])
			i++;
		count++;
	}
	return (count);
}

static int	ft_count_word(char *s, char c)
{
	int	count;

	count = 0;
	while (*s && c != *s)
	{
		count++;
		s++;
	}
	return (count);
}

static char	*ft_word(char *s, char c, char **word)
{
	int	count;
	int	i;

	count = ft_count_word(s, c);
	*word = malloc((count + 1) * sizeof(char));
	(*word)[count] = 0;
	i = 0;
	while (i < count)
		(*word)[i++] = *s++;
	while (c == *s)
		s++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**res;
	int		count;	

	if (s == 0)
		return (NULL);
	i = 0;
	while (c == (char) *s)
		s++;
	count = ft_count_split((char *)s, c);
	res = malloc((count + 1) * sizeof(char *));
	if (!res)
		return (0);
	res[count] = 0;
	i = 0;
	while (i < count)
	{
		s = ft_word((char *)s, c, res + i);
		i++;
	}
	return (res);
}
