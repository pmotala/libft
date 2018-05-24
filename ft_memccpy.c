/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmotala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:55:04 by pmotala           #+#    #+#             */
/*   Updated: 2018/05/21 14:55:06 by pmotala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;
	char *buf;
	const char *buf2;

	buf = (char *)dst;
	buf2 = (const char *)src;
	i = 0;
	while(i < n)
	{
		buf[i] = buf2[i];
		if(buf2[i] == (unsigned char)c)
		{
			return(dst + i + 1);
		}
		i++;
	}
	return (NULL);
}