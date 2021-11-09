/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-maza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:26:22 by rel-maza          #+#    #+#             */
/*   Updated: 2021/11/09 16:36:23 by rel-maza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	ft_copy(char *p, int n, int len)
{
	p[len] = 0;
	while (len > 0)
	{
		len--;
		p[len] = n % 10 + 48;
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*p;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	else if (n < 0)
	{
		n = n * -1;
		len = ft_count(n) + 1;
		p = malloc (len + 1 * sizeof(char));
		ft_copy(p, n, len);
		p[0] = '-';
		return (p);
	}
	else
	{
		len = ft_count(n);
		p = malloc(len + 1 * sizeof(char));
		ft_copy(p, n, len);
		return (p);
	}
}
