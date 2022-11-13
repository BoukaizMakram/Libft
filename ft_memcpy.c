/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukaiz <mboukaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:01:31 by mboukaiz          #+#    #+#             */
/*   Updated: 2022/11/12 15:12:26 by mboukaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;
	int				i;

	i = 0;
	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (!src && !dst)
		return (NULL);
	while (n--)
	{
		destination[i] = source[i];
		i++;
	}
	return ((void *)dst);
}
