/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboukaiz <mboukaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:09:47 by mboukaiz          #+#    #+#             */
/*   Updated: 2022/11/12 15:12:33 by mboukaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char **strs, char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		if (strs)
			strs[count] = ft_substr(s, 0, i);
		if (strs && strs[count] == NULL)
			return (-1);
		count++;
		while (s[i] && s[i] == c)
			i++;
		s = s + i;
		i = 0;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**strs;

	if (!s)
		return (NULL);
	while (*s && *s == c)
		s++;
	strs = ft_calloc(ft_count(NULL, s, c) + 1, sizeof(char *));
	if (!strs)
		return (NULL);
	if (ft_count(strs, s, c) == -1)
	{
		i = 0;
		while (strs[i])
		{
			free(strs[i]);
			i++;
		}
		free(strs);
		return (NULL);
	}
	return (strs);
}
