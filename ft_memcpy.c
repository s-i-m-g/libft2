/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganase <simon.ganase@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 17:10:27 by sganase           #+#    #+#             */
/*   Updated: 2026/10/04 19:46:43 by sganase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*p2;

	p = dst;
	p2 = src;
	while (n--)
		*p++ = *p2++;
	return (dst);
}
