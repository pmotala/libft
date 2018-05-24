/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmotala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 16:14:54 by pmotala           #+#    #+#             */
/*   Updated: 2018/05/18 16:14:56 by pmotala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isalpha(int c)
{
	if(((unsigned char)c >= 48 && ((unsigned char)c <= 57)) ||
	((unsigned char)c >= 65 && ((unsigned char)c <= 90)))
	{
		return (1);
	}
	return (0);
}