/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganase <simon.ganase@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 10:43:28 by sganase           #+#    #+#             */
/*   Updated: 2026/11/10 15:40:24 by sganase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	*free_all(char **strs, int i2)
{
	while (i2--)
		free(strs[i2]);
	free(strs);
	return (NULL);
}

static int	count_str(char const *s, char c)
{
	int	zone;
	int	count;

	if (!s || !*s)
		return (0);
	zone = ft_strlen(s) - 1;
	count = 0;
	while (zone > 0)
	{
		if (s[zone] != c && s[zone - 1] == c)
			count++;
		zone--;
	}
	if (s[0] != c)
		count++;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		str_count;
	int		i;
	int		i2;

	str_count = count_str(s, c);
	strs = malloc(sizeof(char *) * (str_count + 1));
	if (!strs)
		return (NULL);
	i2 = 0;
	while (str_count--)
	{
		while (*s == c)
			s++;
		i = 0;
		while (s[i] != c && s[i])
			i++;
		strs[i2] = ft_substr(s, 0, i);
		if (!strs[i2])
			return (free_all(strs, i2));
		s += i;
		i2++;
	}
	strs[i2] = NULL;
	return (strs);
}
