/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukaiz <mboukaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:35:01 by mboukaiz          #+#    #+#             */
/*   Updated: 2022/11/12 15:12:59 by mboukaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_in_set(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	a;
	size_t	z;
	char	*ptr;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	a = 0;
	z = ft_strlen(s1);
	while (is_in_set(s1[a], set))
		a++;
	while (is_in_set(s1[z - 1], set))
		z--;
	ptr = ft_substr(s1, a, z - a);
	return (ptr);
}
