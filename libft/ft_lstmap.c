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

t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
        t_list  *newlst;
 
        if (lst && f)
        {
                return reccur(f(lst),lst->next,f);
        }
        return (0);
}
 
t_list *recur(t_list *debut,t_list *fin,t_list *(*f)(t_list *elem))
{
    if (fin)
    {
        debut->next = f(fin);
        return recur(debut,fin->next,f);
    }
    else{
     return debut;
    }
}