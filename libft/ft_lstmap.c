/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flakouda <flakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 19:41:28 by florientako       #+#    #+#             */
/*   Updated: 2018/11/30 13:10:30 by flakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;
	t_list *tmp;

	if (!lst)
		return (NULL);
	list = f(lst);
	lst = lst->next;
	tmp = list;
	while (lst)
	{
		list->next = f(lst);
		lst = lst->next;
		list = list->next;
	}
	return (tmp);
}
