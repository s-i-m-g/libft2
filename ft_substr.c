/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganase <simon.ganase@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 20:30:29 by sganase           #+#    #+#             */
/*   Updated: 2026/11/10 16:52:52 by sganase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	len2;

	if (!s)
		return (NULL);
	len2 = ft_strlen(s);
	if (start >= len2)
		return (ft_strdup(""));
	if ((len2 - start) < len)
		len = len2 - start;
	str = ft_calloc(len + 1, 1);
	if (!str)
		return (NULL);
	s += start;
	return (ft_memmove(str, s, len));
}
