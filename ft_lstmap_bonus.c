/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:04:14 by evallee-          #+#    #+#             */
/*   Updated: 2023/02/22 19:51:39 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*first_list;

	if (!f || !del)
		return (NULL);
	first_list = NULL;
	while (lst)
	{
		new_list = ft_lstnew(f(lst->content));
		if (!new_list)
		{
			while (first_list)
			{
				new_list = first_list->next;
				del(first_list->content);
				free(first_list);
				first_list = new_list;
			}
			return (NULL);
		}
		ft_lstadd_back(&first_list, new_list);
		lst = lst->next;
	}
	return (first_list);
}
