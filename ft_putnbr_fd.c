/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganase <simon.ganase@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 16:13:51 by sganase           #+#    #+#             */
/*   Updated: 2026/10/04 16:23:41 by sganase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str_num;

	str_num = ft_itoa(n);
	if (!str_num)
		return ;
	if (write(fd, str_num, ft_strlen(str_num)) < 0)
	{
		free(str_num);
		return ;
	}
	free(str_num);
}
