/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmotala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 13:48:39 by pmotala           #+#    #+#             */
/*   Updated: 2018/05/23 13:48:42 by pmotala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sizecheck(int n)
{
	int res;
	
	res = 0;
	if (n < 0)
		n = n * -1;
	while (n >= 10)
	{
		n = n / 10;
		res++;
		if (n < 10)
			return (res);
	}
	return (res);
}

int		ft_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	int j;
	int k;
	char *str;

	j = ft_sizecheck(n) + ft_sign(n);
	if((str = (char *)malloc(sizeof(char) * j)) == NULL)
		return(NULL);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	str[j] = '\0';
	while(j >= 0)
	{
		if (n < 0)
		{
			n = n * (-1);
			k = 1;
		}
		str[j] = (n % 10) + 48;
		n = n / 10;
		j--;
	}
	if (k == 1)
		str[0] = '-';
	return (str);
}