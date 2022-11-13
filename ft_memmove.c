/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukaiz <mboukaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:01:39 by mboukaiz          #+#    #+#             */
/*   Updated: 2022/11/11 14:57:38 by mboukaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*destination;
	char	*source;

	destination = (char *)dest;
	source = (char *)src;
	if (!src && !dest)
	{
		return (NULL);
	}
	if (destination >= source)
	{
		while (len)
		{
			len--;
			destination[len] = source[len];
		}
	}
	else
		ft_memcpy(destination, source, len);
	return ((void *)destination);
}
