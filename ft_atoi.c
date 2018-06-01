/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmotala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 11:59:56 by pmotala           #+#    #+#             */
/*   Updated: 2018/06/01 10:48:45 by pmotala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_returnatoi(int n)
{
	if (n == -1)
		return (0);
	return (-1);
}

int			ft_atoi(const char *str)
{
	int		i;
	int		s;
	int		c;
	int		res;

	i = 0;
	res = 0;
	s = 1;
	c = 0;
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
		c++;
		if (c > 18)
			return (ft_returnatoi(s));
	}
	return (res * s);
}
