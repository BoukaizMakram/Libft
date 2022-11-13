/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukaiz <mboukaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:34:13 by mboukaiz          #+#    #+#             */
/*   Updated: 2022/11/12 15:12:39 by mboukaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const	char *src, size_t destsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	i = 0;
	if (destsize == 0 && dst == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (destsize < dst_len)
		return (destsize + src_len);
	if (destsize > dst_len + 1)
	{	
		while (src[i] && dst_len + i + 1 < destsize)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
