/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 22:03:15 by ddelgado          #+#    #+#             */
/*   Updated: 2016/10/20 22:03:17 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next_lst;
	t_list	*temp;

	if (alst != NULL)
	{
		next_lst = *alst;
		while (next_lst != NULL)
		{
			if (del != NULL)
				(*del)(next_lst->content, (*next_lst).content_size);
			temp = next_lst->next;
			ft_memdel(next_lst);
			next_lst = temp;
		}
		*alst = NULL;
	}
}