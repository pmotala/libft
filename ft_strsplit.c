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
	int i;
	int j;
	char *temp;

	i = 0;
	j = 0;
	temp = (char *)malloc(sizeof(temp) * (ft_strlen(s) + 1));
	while(s[i])
	{
		while(s[i] == c && s[i] != '\0')
			i++;
		while(s[i] != c && s[i] != '\0')
		{
			temp[j] = s[i];
			j++;
			i++;
		}
		temp[j] = '*';
		j++;
	}
	temp[j] = '\0';
	return (temp);
}

int		ft_strcnt(char *temp, char c)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while(temp[i])
	{
		if (temp[i] == c)
		{
			j++;
		}
		i++;
	}
	return(j);
}

char	**ft_strsplit(char const *s, char c)
{
	char **split;
	char *temp;
	int i;
	int j;
	int k;

	i = 0;
	temp = ft_cleaner(s, c);
	k = ft_strlen(temp)/2;
	j = ft_strcnt(temp, c);
	split = (char **)malloc(sizeof(char *) * j);
	while (i <= j)
	{
		split[i] = (char *)malloc(sizeof(char) * 10);
		i++;
	}
	i = 0;
	j = 1;
	k = 0;
	while (split[i])
	{
		k = 0;
		while(temp[j] != c)
		{
			split[i][k] = temp[j];
			k++;
			j++;	
		}
		split[i][k] = '\0';
		i++;
	}
	return (split);
}

int main()
{
	char **rest;
	
	rest = ft_strsplit("Basics******test******games*****halo**", '*');
	printf("Result is:%s", rest[1]);
	return (0);
}