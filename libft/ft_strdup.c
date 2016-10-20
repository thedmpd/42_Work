/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 13:38:10 by ddelgado          #+#    #+#             */
/*   Updated: 2016/10/18 13:38:11 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dest;

	i = ft_strlen(src);
	dest = ft_memalloc(sizeof(char) * (i + 1));
	if (!src || !dest)
		return (NULL);
	else
	{
		dest = ft_memcpy(dest, src, i);
		dest[i] = '\0';
		return (dest);
	}
}
