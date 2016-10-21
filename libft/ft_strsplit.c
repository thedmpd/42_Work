/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 15:58:24 by ddelgado          #+#    #+#             */
/*   Updated: 2016/10/20 15:58:26 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	char	**segs;
	char	*src;
	int		i;
	int		count;

	i = 0;
	count = ft_count_objects(s, c);
	src = (char *)s;
	segs = (char **)ft_memalloc(sizeof(char *) * count);
	if (!segs)
		return (NULL);
	while (*src)
	{
		if (*src == c)
		{
			*src = 0;
			src++;
		}
		segs[i] = src;
		src++;
	}
	return (segs);
}