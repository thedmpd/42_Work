/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 11:51:53 by ddelgado          #+#    #+#             */
/*   Updated: 2016/09/25 11:51:54 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *i;
	unsigned char *destination;
	unsigned char *source;

	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	while (n > 0)
	{
		i = (unsigned char *)source;
		*(unsigned char *)destination = *i;
		source++;
		destination++;
		n--;
	}
	return (dest);
}
