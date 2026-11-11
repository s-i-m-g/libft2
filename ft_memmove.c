/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganase <simon.ganase@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 17:26:53 by sganase           #+#    #+#             */
/*   Updated: 2026/11/10 15:18:10 by sganase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*p2;

	p = dst;
	p2 = src;
	if (p > p2)
		while (n--)
			p[n] = p2[n];
	else if (p < p2)
		return (ft_memcpy(dst, src, n));
	return (dst);
}
