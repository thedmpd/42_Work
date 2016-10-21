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

t_list      *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list      *holder;
 
    if (lst != NULL)
    {
        holder = f(lst);
        holder->next = ft_lstmap(lst->next, f);
        return (holder);
    }
    else
        return (NULL);
}