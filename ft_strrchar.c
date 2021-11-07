/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-maza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:40:52 by rel-maza          #+#    #+#             */
/*   Updated: 2021/11/02 12:58:14 by rel-maza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(char *s, int c)
{
	int i ;

	i = 10;
	while(s[i])
	{
		if( s[i] == c)
		{
			return(s);
		}
		i--;
	}
	return(0);
}

#include <stdio.h>

int main()
{
   const char str[] = "www.tco.mg";
   const char ch = '.';
   char *ret;
   ret = ft_strrchr(str,ch);
   printf("||%c|| is |%s|\n", ch, ret);
   return(0);
}
