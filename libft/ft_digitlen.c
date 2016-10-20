/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 13:59:19 by ddelgado          #+#    #+#             */
/*   Updated: 2016/10/20 14:16:20 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_digitlen(int nb)
{
	size_t len;

	if (n < 0)
		len = 1;
	else
		len = 0;
	while (nb > 10 || nb < -10)
	{
		nb /= 10;
		len++;
	}
	return (len + 1);
}
