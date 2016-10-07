/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 19:43:37 by ddelgado          #+#    #+#             */
/*   Updated: 2016/09/24 19:43:38 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *char_ptr;
	char c_in;

	c_in = c;
	char_ptr = (char *)s;
	while (*char_ptr != '\0')
	{
		if (*char_ptr == c_in)
			return (char_ptr);
		char_ptr++;
	}
	if (*char_ptr == c_in)
		return (char_ptr);
	else
		return (NULL);
}
