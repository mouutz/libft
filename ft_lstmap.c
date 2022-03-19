/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msahli <msahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 09:15:48 by msahli            #+#    #+#             */
/*   Updated: 2021/01/23 09:22:23 by msahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *top_lst;
	t_list *current;

	top_lst = NULL;
	while (lst)
	{
		if ((current = ft_lstnew(f(lst->content))) == NULL)
		{
			if (top_lst)
				ft_lstclear(&top_lst, del);
			return (NULL);
		}
		if (!top_lst)
			top_lst = current;
		else
			ft_lstadd_back(&top_lst, current);
		lst = lst->next;
	}
	return (top_lst);
}
