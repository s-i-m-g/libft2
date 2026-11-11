/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganase <simon.ganase@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 16:47:52 by sganase           #+#    #+#             */
/*   Updated: 2026/11/11 23:44:45 by sganase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*start;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	start = *lst;
	while (start->next)
		start = (start->next);
	start->next = new;
}
