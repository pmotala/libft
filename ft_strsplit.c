/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmotala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:08:05 by pmotala           #+#    #+#             */
/*   Updated: 2018/05/22 15:08:07 by pmotala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_cleaner(char const *s, char c)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	if (!(temp = (char *)malloc(sizeof(temp) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			temp[j] = s[i];
			j++;
			i++;
		}
		temp[j] = c;
		j++;
	}
	return (temp);
}

int		ft_strcnt(char *temp, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (temp[i])
	{
		if (temp[i] == c && temp[i + 1] != c)
			j++;
		i++;
	}
	return (j);
}

int		ft_wdlen(char *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != c && s[i] != '\0')
	{
		j++;
		i++;
	}
	return (j - 1);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**split;
	char	*temp;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	temp = ft_cleaner(s, c);
	j = ft_strcnt(temp, c);
	if (!(split = (char **)malloc(sizeof(char *) * j)))
		return (NULL);
	while (j--)
	{
		while (temp[k] == c && temp[k] != '\0')
			k++;
		split[i] = ft_strsub((const char*)temp, k, ft_wdlen(temp + k, c));
		while (temp[k] != c && temp[k] != '\0')
			k++;
		i++;
	}
	free(temp);
	return (split);
}
