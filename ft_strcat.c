/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmotala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:24:33 by pmotala           #+#    #+#             */
/*   Updated: 2018/05/21 11:24:35 by pmotala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		j;
	int		c;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	c = 0;
	while (c <= j)
	{
		s1[i] = s2[c];
		i++;
		c++;
	}
	s1[i] = '\0';
	return (s1);
}
