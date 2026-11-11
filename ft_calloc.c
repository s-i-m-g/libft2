/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganase <simon.ganase@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 13:16:38 by sganase           #+#    #+#             */
/*   Updated: 2026/10/03 13:31:33 by sganase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = NULL;
	if (size && count > ((size_t)-1) / size)
		return (p);
	p = malloc(size * count);
	if (p)
		ft_bzero(p, count * size);
	return (p);
}
