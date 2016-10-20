/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 13:45:36 by ddelgado          #+#    #+#             */
/*   Updated: 2016/10/20 13:45:37 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*new_string;
	int		i;
	int		neg;
	int		remainder;
	long	long_n;

	long_n = (long)n;
	new_string = ft_strnew(ft_digitlen(n));
	i = 0;
	neg = 0;
	if (!new_string)
		return (NULL);
	new_string[i] = '0';
	if (long_n == 0)
		return (new_string);
	neg = (long_n < 0) ? 1 : 0;
	long_n = (long_n < 0) ? -long_n : long_n;
	while (long_n != 0)
	{
		remainder = long_n % 10;
		new_string[i++] = remainder + '0';
		long_n = long_n / 10;
	}
	new_string[i] = neg ? '-' : new_string[i];
	return (ft_strrev(new_string));
}
