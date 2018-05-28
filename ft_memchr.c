/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmotala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 15:37:15 by pmotala           #+#    #+#             */
/*   Updated: 2018/05/21 15:37:18 by pmotala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/mman.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*buf;
	unsigned char	d;

	buf = (unsigned char *)s;
	d = (unsigned char)c;
	i = 0;
	while (i <= n && buf[i] != '\0')
	{
		if (buf[i] == d)
		{
			return (buf + i);
		}
		i++;
	}
	if (d == '\0')
	{
		return (buf + i);
	}
	return (NULL);
}
