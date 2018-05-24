/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmotala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 07:21:40 by pmotala           #+#    #+#             */
/*   Updated: 2018/05/21 07:21:41 by pmotala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i;
    int j;
    int k;
    char *ret;

    i = 0;
    j = 0;
    k = 0;
    ret = (char *)haystack; 
    while (j <= len)
    {
        while ((needle[i] == haystack [j]))
        {
            i++;
            j++;
        }
        if (needle[i] == '\0')
            return(&ret[j - i]);
        else if (i > 0 && needle[i] != '\0')
            return(0);
        j++;
    }
    return (0);
}