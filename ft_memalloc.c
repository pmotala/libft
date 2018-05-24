/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmotala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 07:28:16 by pmotala           #+#    #+#             */
/*   Updated: 2018/05/22 07:28:19 by pmotala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void		*mem;
	size_t		i;

	if ((mem = malloc(size)) == NULL)
		return (NULL);
	while (i <= size)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
