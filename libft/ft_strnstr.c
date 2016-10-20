/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 23:55:37 by ddelgado          #+#    #+#             */
/*   Updated: 2016/09/25 23:55:39 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	size_t	k;

	if (!*little)
		return ((char *)big);
	i = 0;
	while (big[i] && len > 0)
	{
		j = 0;
		k = len;
		while (little[j] == big[i + j] && k > 0)
		{
			if (little[j + 1] == '\0')
			{
				return ((char *)&big[i]);
			}
			j++;
			k--;
		}
		i++;
		len--;
	}
	return (NULL);
}
