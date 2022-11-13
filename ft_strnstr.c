/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukaiz <mboukaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:34:48 by mboukaiz          #+#    #+#             */
/*   Updated: 2022/11/12 15:13:00 by mboukaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	pos;

	if (!haystack && len == 0)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			pos = 1;
			while (needle[pos] && haystack[i + pos] == needle[pos]
				&& pos + i < len)
				pos++;
			if (needle[pos] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}
