/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 10:37:16 by ddelgado          #+#    #+#             */
/*   Updated: 2016/10/18 10:37:18 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n != 0)
	{
		*(unsigned char *)dest = *(unsigned char *)src;
		if (*(unsigned char *)src == (unsigned char)c)
			return (dest + 1);
		n--;
		dest++;
		src++;
	}
	return (NULL);
}
