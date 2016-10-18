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
	char		*dst;
	const char	*s;
	size_t		n;
	size_t		dlen;

	dst = dest;
	s = src;
	n = size;
	while (n-- != 0 && *dest != '\0')
		dst++;
	dlen = dst - dest;
	n = size - dlen;
	if (n == 0)
		return (dlen + strlen(s));
	while (*s)
	{
		if (n != 1)
		{
			*dst++ = *s;
			n--;
		}
		s++;
	}
	*dst = '\0';
	return (dlen + (s - src));
}
