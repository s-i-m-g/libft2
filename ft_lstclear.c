/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganase <simon.ganase@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 17:36:43 by sganase           #+#    #+#             */
/*   Updated: 2026/11/11 23:59:53 by sganase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*elem;
	t_list	*next_elem;

	if (!lst)
		return ;
	elem = *lst;
	while (elem)
	{
		next_elem = elem->next;
		del(elem->content);
		free(elem);
		elem = next_elem;
	}
	*lst = NULL;
}
