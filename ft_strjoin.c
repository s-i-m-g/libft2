/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganase <simon.ganase@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 22:11:11 by sganase           #+#    #+#             */
/*   Updated: 2026/11/10 15:55:45 by sganase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len[3];
	char	*str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len[1] = ft_strlen(s1);
	len[2] = ft_strlen(s2);
	len[0] = len[1] + len[2];
	str = malloc(len[0] + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, len[1]);
	ft_memcpy(str + len[1], s2, len[2] + 1);
	return (str);
}
