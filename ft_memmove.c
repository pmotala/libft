/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmotala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 15:10:10 by pmotala           #+#    #+#             */
/*   Updated: 2018/05/21 15:10:13 by pmotala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int i;
	char *buf;
	char *buf2;
	char *temp;

	buf = (char *)dst;
	buf2 = (char *)src;
	i = 0;
	if (src < dst)
	while(buf[i])
	{
		temp[i] = buf2[i];
		i++;
	}
	i = 0;
	while(i < len)
	{
		buf[i] = temp[i];
		i++;
	}
	return (dst);
}