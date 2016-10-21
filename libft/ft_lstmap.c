/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 22:03:41 by ddelgado          #+#    #+#             */
/*   Updated: 2016/10/20 22:03:42 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list*))
{
	t_list	*new_list;
	t_list	*iter_o;
	t_list	*iter_n;

	new_list = f(lst);
	if (new_list)
	{
		iter_o = lst->next;
		iter_n = new_list;
		while (iter_o)
		{
			iter_n->next = f(iter_o);
			iter_o = iter_o->next;
			iter_n = iter_n->next;
		}
	}
	return (new_list);
}