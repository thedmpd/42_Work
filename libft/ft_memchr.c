/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 19:43:24 by ddelgado          #+#    #+#             */
/*   Updated: 2016/09/24 19:43:25 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The memchr() function locates the first occurrence of c (converted to an
**unsigned char) in string s. Returns NULL if c is not in s within n bytes.
*/

void		*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *char_ptr;
	unsigned char		c_in;

	c_in = (unsigned char)c;
	char_ptr = (const unsigned char *)s;
	while (n > 0)
	{
		if (*char_ptr == c_in)
		{
			return ((void *)char_ptr);
		}
		n--;
		char_ptr++;
	}
	return (NULL);
}
