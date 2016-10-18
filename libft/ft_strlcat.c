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
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	while (*dest)
	{
		i++;
		dest++;
	}
	if((size - i) == 0)
		return((i - ft_strlen(dest)) + ft_strlen(src));
	j = 0;
	while (*src && size > 1)
	{
		dest[i + j] = src[j];
		j++;
		size--;
		src++;
	}
	dest[i + j] = '\0';
	k = 0;
	while (src[k] != '\0')
		k++;
	return (k + size);
}
