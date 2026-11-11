/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganase <simon.ganase@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 21:50:08 by sganase           #+#    #+#             */
/*   Updated: 2026/10/03 19:48:27 by sganase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (!needle_len)
		return ((char *)haystack);
	if (needle_len > len)
		return (NULL);
	len -= needle_len - 1;
	while (len-- && *haystack)
	{
		if (!ft_strncmp(haystack, needle, needle_len))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
