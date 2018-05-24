/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmotala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:17:58 by pmotala           #+#    #+#             */
/*   Updated: 2018/05/21 13:17:59 by pmotala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;
	int		i;

	i = ft_strlen(s1);
	ret = (char *)malloc(i + 1);
	if (ret == NULL)
		return (NULL);
	ft_strcpy(ret, s1);
	return (ret);
}
