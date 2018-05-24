/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmotala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 08:23:19 by pmotala           #+#    #+#             */
/*   Updated: 2018/05/18 15:21:18 by pmotala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = ft_strlen(dest);
	if (i < n)
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	if (j < n)
		dest[i] = '\0';
	return (dest);
}
