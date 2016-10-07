/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 19:43:54 by ddelgado          #+#    #+#             */
/*   Updated: 2016/09/24 19:43:56 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char c_in;
	char *char_ptr;

	char_ptr = NULL;
	c_in = (char)c;
	while (*s != '\0')
	{
		if (*s == c_in)
			char_ptr = (char *)s;
		s++;
	}
	if (*s == c_in)
	{
		char_ptr = (char *)s;
		return (char_ptr);
	}
	else if (char_ptr != NULL)
		return (char_ptr);
	else
		return (NULL);
}
