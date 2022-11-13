/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukaiz <mboukaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:34:54 by mboukaiz          #+#    #+#             */
/*   Updated: 2022/11/12 15:12:59 by mboukaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s1, int c)
{
	size_t	len;
	char	find;
	char	*s;

	s = (char *)s1;
	find = (char)c;
	len = ft_strlen(s);
	while (len > 0)
	{
		if (s[len] == find)
			return (s + len);
		len--;
	}
	if ((char)s[len] == find)
		return (s + len);
	return (NULL);
}
