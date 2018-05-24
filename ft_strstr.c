/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmotala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 13:33:26 by pmotala           #+#    #+#             */
/*   Updated: 2018/05/19 13:33:28 by pmotala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int t;
	int pos;

	i = 0;
	t = 0;
	while (haystack[i])
	{
		t = 0;		
		while (haystack[i] == needle[t] && needle[t])
		{
			t++;
			i++;
		}
		if (needle[t] == '\0')
		{
			pos = i - t;
			return (((char *)haystack) + pos);
		}
		i++;
	}
	return (0);
}