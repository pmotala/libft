/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmotala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 11:57:11 by pmotala           #+#    #+#             */
/*   Updated: 2018/05/22 11:57:14 by pmotala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	int				k;
	size_t			j;
	char			*str;
	char			*cpy;

	i = 0;
	k = 0;
	j = ft_strlen(s) - 1;
	str = (char *)s;
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		i++;
	while ((str[j] == ' ' || str[j] == '\t' || str[j] == '\n'))
		j--;
	if (i > 0 || j < (ft_strlen(s)))
		return (ft_strsub(s, i, (j - i)));
	else
		return (ft_strdup(s));
}
