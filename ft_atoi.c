/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganase <simon.ganase@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 22:25:24 by sganase           #+#    #+#             */
/*   Updated: 2026/10/02 22:50:06 by sganase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	n;
	int		sign;

	n = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
		sign = 1 - 2 * (*str++ == '-');
	while (ft_isdigit(*str))
	{
		n = (n * 10) + (*str - '0');
		str++;
	}
	return (n * sign);
}
