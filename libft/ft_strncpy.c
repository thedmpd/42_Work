/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 10:37:47 by ddelgado          #+#    #+#             */
/*   Updated: 2016/10/18 10:37:49 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int i;

	i = ft_strlen(src);
	if(i < n)
	{
		ft_memcpy(dest, src, i);
		while(i < n)
		{
			dest[i] = '\0';
			i++;
		}
		return(dest);
	}
	else
		return(ft_memcpy(dest,src,n));
}
