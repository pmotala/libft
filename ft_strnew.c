/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmotala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 09:06:27 by pmotala           #+#    #+#             */
/*   Updated: 2018/05/22 09:06:28 by pmotala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;
	int i;

	i = 0
	str = (char *)malloc(sizeof(str) * (size + 1))
	if(size == 0 || !str)
	{
		return(NULL);
	}
	while(i <= size)
	{
		str[i] = '\0';
		i++;
	}
	str[i] = '\0';
	return(str);
}