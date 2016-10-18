/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 10:37:16 by ddelgado          #+#    #+#             */
/*   Updated: 2016/10/18 10:37:18 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	if(ft_memchr(src,c,n) != NULL)
	{
		ft_putstr(ft_strclen(src,c));
		dest = ft_memcpy(dest,src, ft_strclen(src,c));
		return(dest + ft_strclen(src, c));
	}
	else
		return(NULL);
}
