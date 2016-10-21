/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_objects.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 20:31:33 by ddelgado          #+#    #+#             */
/*   Updated: 2016/10/20 20:31:34 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_count_objects(const char *s, char c)
{
	size_t count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			s = ft_strchr(s,c);
			printf("count %s\n", s);
		}
		else
			s++;
	}
	return (count);
}
