/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmotala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 10:51:06 by pmotala           #+#    #+#             */
/*   Updated: 2018/05/21 10:51:08 by pmotala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		pos;

	i = 0;
	pos = 0;
	while (s[i] && (char)c <= 127 && (char)c >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)s + pos);
		}
		pos++;
		i++;
	}
	return (0);
}
