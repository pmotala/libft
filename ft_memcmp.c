/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmotala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 15:46:07 by pmotala           #+#    #+#             */
/*   Updated: 2018/05/21 15:46:08 by pmotala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	unsigned char *buf;
	unsigned char *buf2;

	i = 0;
	buf = (unsigned char *)s1;
	buf2 = (unsigned char *)s2;
	if((ft_strlen(buf) == 0) && (ft_strlen(buf2) == 0))
		return (0);
	else if (n == 0)
		return (0);
	else
	{
		while (i <= n)
		{
			if(buf[i] != buf2[i])
			{
				return (buf[i] - buf2[i]);
			}
			i++;
		}
	}
	return (0);
}