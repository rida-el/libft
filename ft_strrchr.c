/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-maza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:32:22 by rel-maza          #+#    #+#             */
/*   Updated: 2021/11/05 15:15:40 by rel-maza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while(s[i])
    {
      i++;
    }
    if ( s[i] ==(unsigned char) c)
      return((char*) s + i);
    while(i >= 0)
    {
        if( s[i] == (unsigned char) c)
        {
           return((char*) s + i);
        }
        i--;
    }
    return (0);
}
