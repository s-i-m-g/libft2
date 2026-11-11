/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganase <simon.ganase@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 12:45:02 by sganase           #+#    #+#             */
/*   Updated: 2026/10/04 13:32:20 by sganase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	itolen(int n)
{
	int				len;
	unsigned int	nb;

	len = 1;
	nb = n;
	if (n < 0)
	{
		nb = -nb;
		len++;
	}
	while (nb / 10)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*str;
	unsigned int	nb;

	len = itolen(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	nb = n;
	if (n < 0)
	{
		*str = '-';
		nb = -nb;
	}
	while (nb / 10)
	{
		str[len - 1] = (nb % 10) + '0';
		len--;
		nb /= 10;
	}
	str[len - 1] = (nb % 10) + '0';
	return (str);
}
