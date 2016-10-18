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
#include "stdio.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = ft_strclen(src,c);
	if(ft_memchr(src,c,n) == NULL)
		return(NULL);
	else if(i < n - 1)
	{
		//printf("%zu\n", ft_strclen(src,c));
		dest = ft_strncpy(dest,src, i);
		return(dest + i);
	}
	else
	{
		dest = ft_strncpy(dest,src,n);
		return(dest + n);
	}
}
