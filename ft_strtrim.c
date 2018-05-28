/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmotala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 11:57:11 by pmotala           #+#    #+#             */
/*   Updated: 2018/05/28 14:32:50 by pmotala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	size_t			k;
	size_t			j;

	i = 0;
	k = 0;
	j = 0;
	if (!s)
		return (0);
	while (s[j])
		j++;
	k = j;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	if (s[i] == '\0')
		return ("");
	while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n' || s[j] == '\0'))
		j--;
	if (i > 0 || j < k)
		return (ft_strsub(s, i, ((j - (size_t)i) + 1)));
	else
		return (ft_strdup(s));
}
