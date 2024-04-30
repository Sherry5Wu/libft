/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingwu <jingwu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 07:23:19 by jingwu            #+#    #+#             */
/*   Updated: 2024/04/30 07:25:31 by jingwu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
    Description:
    Iterates the list ’lst’ and applies the function ’f’ on the content
    of each node. Creates a new list resulting of the successive
    applications of the function ’f’. The ’del’ function is used to
    delete the content of a node if needed.

    Parameters:
    lst: The address of a pointer to a node.
    f: The address of the function used to iterate on the list.
    del: The address of the function used to delete the content of
   		a node if needed.

    Return value:
    The new list. NULL if the allocation fails.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*tmpnode;

	if (!lst || !f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		tmpnode = ft_lstnew(f(lst->content));
		if (!tmpnode)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, tmpnode);
		lst = lst->next;
	}
	return (newlst);
}
