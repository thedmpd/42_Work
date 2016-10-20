/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 11:02:27 by ddelgado          #+#    #+#             */
/*   Updated: 2016/10/11 11:02:29 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy_back(void *restrict dest, const void *restrict src, size_t n)
{
	unsigned char	i;
	unsigned char	*destination;
	unsigned char	*source;
	int				counter;

	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	counter = n - 1;
	while (n > 0)
	{
		i = source[counter];
		destination[counter] = i;
		counter--;
		n--;
	}
	return (dest);
}
