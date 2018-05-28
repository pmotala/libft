/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmotala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 11:59:56 by pmotala           #+#    #+#             */
/*   Updated: 2018/05/28 12:49:08 by pmotala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		s;
	int		res;

	i = 0;
	res = 0;
	s = 1;
	while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9))
		i++;
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	while (str[i] <= 57 && str[i] >= 48)
	{
		res = ((res * 10) + (str[i] - 48));
		i++;
	}
	return (res * s);
}
