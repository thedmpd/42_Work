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

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		destinationlen;

	d = dest;
	s = src;
	n = size;
	while(*d && n > 0)
	{
		d++;
		n--;
	}
	destinationlen = d - dest;
	n = size - destinationlen;
	if(n == 0)
		return(destinationlen + ft_strlen(s));
	while(*s++ && n-- > 1)
	{
		*d = *s;
		d++;
	}
	*d = '\0';
	s++;
	return(destinationlen + (s - src));
}
