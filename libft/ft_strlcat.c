/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 13:51:31 by ddelgado          #+#    #+#             */
/*   Updated: 2016/10/18 13:51:32 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	k;
	size_t	i;

	k = ft_strlen(dest);
	i = n;
	while (*dest != '\0' && i > 0)
	{
		dest++;
		i--;
	}
	i = n - (size_t)dest;
	if(i == 0)
		return((size_t)dest + ft_strlen(src));
	while (*src != '\0')
	{
		if(n > 1)
		{
			*dest = *src;
			dest++;
			n--;
		}
		src++;
	}
	*dest = '\0';
	return (ft_strlen(dest));
}
