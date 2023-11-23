/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzelouan <mzelouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:03:44 by mzelouan          #+#    #+#             */
/*   Updated: 2023/11/17 22:46:06 by mzelouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*holder;

	new_list = NULL;
	if (lst && f && del)
	{
		while (lst)
		{
			holder = ft_lstnew(f(lst->content));
			if (!holder)
			{
				ft_lstclear(&new_list, del);
				return (NULL);
			}
			ft_lstadd_back(&new_list, holder);
			lst = lst->next;
		}
		return (new_list);
	}
	return (NULL);
}
