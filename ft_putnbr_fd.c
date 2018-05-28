/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmotala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 11:39:01 by pmotala           #+#    #+#             */
/*   Updated: 2018/05/24 11:39:03 by pmotala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sizecheck_fd(int c)
{
	int		res;

	res = 0;
	if (c < 0)
		c = c * -1;
	while (c > 10)
	{
		c = c / 10;
		res++;
		if (c < 10)
			return (res);
	}
	return (res);
}

int		ft_sign_fd(int c)
{
	if (c < 0)
		return (1);
	return (0);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	int		k;
	char	str[13];

	i = ft_sizecheck_fd(n) + ft_sign_fd(n);
	k = 0;
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		while (i >= 0)
		{
			if (n < 0)
			{
				n = n * -1;
				k = 1;
			}
			str[i] = (n % 10) + 48;
			n = n / 10;
			i--;
		}
		if (k == 1)
			str[0] = '-';
		ft_putstr_fd(str, fd);
	}
}
