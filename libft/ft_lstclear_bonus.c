/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzelouan <mzelouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 02:23:20 by mzelouan          #+#    #+#             */
/*   Updated: 2023/11/18 21:16:51 by mzelouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*next;

	if (lst && del)
	{
		node = *lst;
		while (node != NULL)
		{
			next = node->next;
			ft_lstdelone(node, del);
			node = next;
		}
		*lst = NULL;
	}
}
