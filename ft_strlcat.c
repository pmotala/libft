/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmotala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 12:50:00 by pmotala           #+#    #+#             */
/*   Updated: 2018/05/21 12:50:01 by pmotala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	j = 0;
	k = ft_strlen(dst);
	l = ft_strlen(dst);
	if (dstsize < k)
		i = dstsize + ft_strlen(src);
	else
	{
		while (k < dstsize)
		{
			dst[k] = (char)src[j];
			k++;
			j++;
		}
		dst[k] = '\0';
		i = l + ft_strlen(src);
	}
	return (i);
}
